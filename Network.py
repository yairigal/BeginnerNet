import random
from math import exp

from PIL import Image
import os

training_dir = r"C:\Users\yairi\Desktop\Mnist\training"
testing_dir = r"C:\Users\yairi\Desktop\Mnist\testing"

input_max_value = 255

input_layer_neurons_number = 28 * 28
first_layer_neurons_number = 200
second_layer_neurons_number = 100
output_layer_neurons_number = 10

learning_rate = 0.03
num_epochs = 10
batch_size = 100

"""
training:
    1. we insert the inputs.
    2. we let it flow through the net.
    3. we look at the output.
        3.1 
"""


def init_network():
    input_weights = [[random.random() for _ in range(first_layer_neurons_number)] for _ in
                     range(input_layer_neurons_number)]
    l1_weights = [[random.random() for _ in range(second_layer_neurons_number)] for _ in
                  range(first_layer_neurons_number)]
    l2_weights = [[random.random() for _ in range(output_layer_neurons_number)] for _ in
                  range(second_layer_neurons_number)]
    return input_weights, l1_weights, l2_weights


def train_network(in_w, hl1_w, hl2_w, data, epochs=10):
    print("Started Training...")
    for epoch in range(epochs):
        sum_error = 0
        for item in data[epoch * batch_size:batch_size * (epoch + 1)]:
            x = item[0]
            expected_output = item[1]
            outputs, hl2_outputs, hl1_outputs = forward_propagation(hl1_w, hl2_w, in_w, x)
            sum_error += (1 / len(expected_output)) * sum(
                [(expected_output[i] - outputs[i]) for i in range(len(expected_output))])
            hl1_deltas, hl2_deltas, output_deltas = calculate_errors(expected_output, hl1_outputs, hl1_w, hl2_outputs,
                                                                     hl2_w,
                                                                     outputs)
            update_weights(hl1_deltas, hl1_outputs, hl1_w, hl2_deltas, hl2_outputs, hl2_w, in_w, output_deltas, x)
        print("epoch {}/{} error= {}".format(epoch + 1, epochs, sum_error))


def train_network_inf(in_w, hl1_w, hl2_w, data, epochs=10):
    print("Started Training...")
    i = 0
    for item in data:
        i += 1
        x = item[0]
        expected_output = item[1]
        outputs, hl2_outputs, hl1_outputs = forward_propagation(hl1_w, hl2_w, in_w, x)
        errs_std = [abs(expected_output[i] - outputs[i]) for i in range(len(expected_output))]
        sum_error = sum(errs_std) / (len(errs_std))
        hl1_deltas, hl2_deltas, output_deltas = calculate_errors(expected_output, hl1_outputs, hl1_w, hl2_outputs,
                                                                 hl2_w,
                                                                 outputs)
        update_weights(hl1_deltas, hl1_outputs, hl1_w, hl2_deltas, hl2_outputs, hl2_w, in_w, output_deltas, x)

        if i % 100 == 0:
            print("Error= {}".format(sum_error))


def update_weights(hl1_deltas, hl1_outputs, hl1_w, hl2_deltas, hl2_outputs, hl2_w, in_w, output_deltas, x):
    # updating weights in -> hl1
    for i in range(len(in_w)):
        neuron = in_w[i]
        for j in range(len(neuron)):
            in_w[i][j] += learning_rate * hl1_deltas[j] * x[i]
    # updating weights hl1 -> hl2
    for i in range(len(hl1_w)):
        neuron = hl1_w[i]
        for j in range(len(neuron)):
            hl1_w[i][j] += learning_rate * hl2_deltas[j] * hl1_outputs[i]
    # updating weights hl2 -> output
    for i in range(len(hl2_w)):
        neuron = hl2_w[i]
        for j in range(len(neuron)):
            hl2_w[i][j] += learning_rate * output_deltas[j] * hl2_outputs[i]


def calculate_errors(expected_output, hl1_outputs, hl1_w, hl2_outputs, hl2_w, outputs):
    # output_layer
    errors = []
    for i in range(output_layer_neurons_number):
        errors.append(expected_output[i] - outputs[i])
    # compute deltas
    output_deltas = []
    for i in range(output_layer_neurons_number):
        output_deltas.append(errors[i] * activation_function(outputs[i], derivative=True))
    # hl2
    errors = []
    for i in range(second_layer_neurons_number):
        error = 0
        for j in range(output_layer_neurons_number):
            error += hl2_w[i][j] * output_deltas[j]
        errors.append(error)
    # compute deltas
    hl2_deltas = []
    for i in range(second_layer_neurons_number):
        hl2_deltas.append(errors[i] * activation_function(hl2_outputs[i], derivative=True))
    # hl1
    errors = []
    for i in range(first_layer_neurons_number):
        error = 0
        for j in range(second_layer_neurons_number):
            error += hl1_w[i][j] * hl2_deltas[j]
        errors.append(error)
    # compute deltas
    hl1_deltas = []
    for i in range(first_layer_neurons_number):
        hl1_deltas.append(errors[i] * activation_function(hl1_outputs[i], derivative=True))

    return hl1_deltas, hl2_deltas, output_deltas


def forward_propagation(hl1_w, hl2_w, in_w, x):
    # in -> hl1
    hl1_outputs = [0 for _ in range(first_layer_neurons_number)]
    for i in range(len(in_w)):
        weights = in_w[i]
        current_input = x[i]
        for j in range(len(weights)):
            weight = weights[j]
            hl1_outputs[j] += weight * current_input
    hl1_outputs = [activation_function(x) for x in hl1_outputs]
    # hl1 -> hl2
    hl2_outputs = [0 for _ in range(second_layer_neurons_number)]
    for i in range(len(hl1_w)):
        weights = hl1_w[i]
        current_input = hl1_outputs[i]
        for j in range(len(weights)):
            weight = weights[j]
            hl2_outputs[j] += weight * current_input
    hl2_outputs = [activation_function(x) for x in hl2_outputs]
    # hl2 -> output
    outputs = [0 for _ in range(output_layer_neurons_number)]
    for i in range(len(hl2_w)):
        weights = hl2_w[i]
        current_input = hl2_outputs[i]
        for j in range(len(weights)):
            weight = weights[j]
            outputs[j] += weight * current_input
    outputs = [activation_function(x) for x in outputs]
    return outputs, hl2_outputs, hl1_outputs


def preprocess_data(dir):
    categories = os.listdir(dir)
    data = []
    print("Started preprocessing")
    for category in categories:
        expected_value = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
        expected_value[int(category)] = 1.0
        files = os.listdir(dir + "\\" + category)
        num_files = len(files)
        i = 0
        arr = []
        for file in files:
            i += 1
            if i % 1000 == 0:
                print("file {}/{} at category {}".format(i, num_files, category))
            file_dir = dir + "\\" + category + "\\" + file
            pixels = get_pixels_for_pic(file_dir)
            arr.append((pixels, expected_value))
        data += arr
    return data


def save_network(in_w, l1_w, l2_w):
    print("Saving Network...")
    with open("data\in_w", 'w+') as f:
        f.write(str(in_w))
    with open("data\l1_w", 'w+') as f:
        f.write(str(l1_w))
    with open("data\l2_w", 'w+') as f:
        f.write(str(l2_w))


def test_network(test_data, in_w, l1_w, l2_w):
    print("Started Testing")
    avg = 0.0
    i = 0
    test_size = len(test_data)
    for item in test_data:
        i += 1
        if i % 400 == 0:
            print("testing {}/{}".format(i, test_size))
        x = item[0]
        expected_output = item[1]
        output, _, _ = forward_propagation(hl1_w=l1_w, hl2_w=l2_w, in_w=in_w, x=x)
        if output == expected_output:
            avg += 1
    return avg / len(test_data)


def read_data_from_file(param):
    with open(param, "r") as f:
        return eval(f.read())


def save_data(param, data):
    with open(param, "w+") as f:
        f.write(str(data))


def main():
    in_w, l1_w, l2_w = init_network()

    # if not os.path.exists("data/training"):
    data = preprocess_data(training_dir)
    # shuffling the data
    random.shuffle(data)
    # save_data("data/training", data)
    # else:
    #     print("loading training data from files...")
    #     data = read_data_from_file("data/training")
    train_network_inf(in_w, l1_w, l2_w, data, epochs=num_epochs)
    save_network(in_w, l1_w, l2_w)

    # if not os.path.exists("data/testing"):
    test_data = preprocess_data(testing_dir)
    # save_data("data/testing", test_data)
    # else:
    #     print("loading testing data from files...")
    #     test_data = read_data_from_file("data/testing")
    random.shuffle(test_data)
    accuracy = test_network(test_data, in_w, l1_w, l2_w)
    print("accuracy = {}".format(accuracy * 100))


def activation_function(x, derivative=False):
    return sigmoid(x, derivative)


def sigmoid(x, derivative=False):
    if not derivative:
        print(x)
        return 1.0 / (1.0 + exp(-x))
    else:
        return sigmoid(x) * (1.0 - sigmoid(x))


def ReLU(x):
    return max(0, x)


def ReLU_derivative(x):
    if x < 0:
        return 0
    else:
        return 1


def cost_function(input, expected):
    return 0.5 * ((input - expected) ** 2)


def get_pixels_for_pic(pic_dir):
    img = Image.open(pic_dir)
    pix = img.load()
    pixels = []
    for i in range(28):
        for j in range(28):
            if not 1 > pix[i, j] > -1:
                pixels.append(pix[i, j])
            else:
                pixels.append(pix[i, j])
    return pixels


if __name__ == '__main__':
    main()
