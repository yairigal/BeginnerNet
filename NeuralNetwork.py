import random
from Network import preprocess_data, training_dir, testing_dir
from math_functions import activation_function


class NeuralNetwork:
    def __init__(self, layers, learning_rate=0.03):
        self.weights = []

        self.layers = layers
        self.learning_rate = learning_rate
        self.recent_evaluation_inputs = [0] * len(layers)
        self.deltas = [0] * len(layers)
        random.seed(1)
        for i in range(len(layers) - 1):
            w = [[random.random() for _ in range(layers[i + 1])] for _ in
                 range(layers[i])]
            self.weights.append(w)

    def forward_propagation(self, x):
        try:
            inputs = x
            self.recent_evaluation_inputs[0] = x
            for index in range(len(self.weights)):
                next_layer_num_neurons = self.layers[index + 1]
                current_outputs = [0] * next_layer_num_neurons
                current_layer_weights = self.weights[index]
                for i in range(len(current_layer_weights)):
                    wgts = current_layer_weights[i]
                    current_input = inputs[i]
                    for j in range(len(wgts)):
                        weight = wgts[j]
                        current_outputs[j] += weight * current_input
                current_outputs = [activation_function(item) for item in current_outputs]
                # add bias here
                inputs = current_outputs
                self.recent_evaluation_inputs[index + 1] = inputs
            return inputs
        except Exception as e:
            print("fp: index: ", index, "current_outputs= ", current_outputs, "weights= ", self.weights[index])
            raise e

    def update_weights(self):
        for i in range(len(self.weights)):
            current_weights = self.weights[i]
            for j in range(len(current_weights)):
                neuron = current_weights[j]
                for k in range(len(neuron)):
                    self.weights[i][j][k] += self.learning_rate * self.deltas[i + 1][k] * \
                                             self.recent_evaluation_inputs[i][j]

    def calculate_errors(self, expected_output):
        for i in range(len(self.layers)):
            i = len(self.layers) - 1 - i
            num_neurons = self.layers[i]
            if i == len(self.layers) - 1:  # last layer
                errors = []
                for j in range(num_neurons):
                    errors.append(expected_output[j] - self.recent_evaluation_inputs[i][j])
            else:
                # hl2
                errors = []
                next_layer_num_neurons = self.layers[i + 1]
                for j in range(num_neurons):
                    error = 0
                    for k in range(next_layer_num_neurons):
                        error += self.weights[i][j][k] * self.deltas[i + 1][k]
                    errors.append(error)

            # compute deltas
            output_deltas = []
            for j in range(num_neurons):
                output_deltas.append(
                    errors[j] * activation_function(self.recent_evaluation_inputs[i][j],
                                                    derivative=True))
            self.deltas[i] = output_deltas

    def predict(self, x):
        return self.forward_propagation(x)

    def test(self, data):
        print("Started Testing")
        random.shuffle(data)
        avg = 0.0
        i = 0
        test_size = len(data)
        for x, expected_output in data:
            i += 1
            if i % 400 == 0:
                print("testing {}/{}".format(i, test_size))
            if self.predict(x) == expected_output:
                avg += 1
        return avg / test_size

    def train(self, data, full_data=False, epochs=10, batch_size=100):
        print("Started Training...")
        random.shuffle(data)
        try:
            if not full_data:
                for epoch in range(epochs):
                    sum_error = 0
                    for x, expected_output in data[epoch * batch_size:batch_size * (epoch + 1)]:
                        output = self.forward_propagation(x)
                        sum_error += self.calc_sum_error(expected_output, output)
                        self.calculate_errors(expected_output)
                        self.update_weights()
                    print("epoch {}/{} error= {}".format(epoch + 1, epochs, sum_error))
            else:
                self.train_full(data)
        except Exception as e:
            print("train: epoch={} x={}".format(epoch, x))
            raise e

    def train_full(self, data):
        i = 0
        size = len(data)
        for x, expected_output in data:
            output = self.forward_propagation(x)
            sum_error = self.calc_sum_error(expected_output, output)
            self.calculate_errors(expected_output)
            self.update_weights()
            print("item {}/{} error= {}".format(i + 1, size, sum_error))
            i += 1

    def new_train(self, data, batch_size=10):
        """
        for each batch:
            accumulate the sum_error.
            calculate each item delta.
        :param data:
        :param batch_size:
        :return:
        """
        random.shuffle(data)
        batches = [data[i:i + batch_size] for i in range(0, len(data), batch_size)]
        for batch in batches:
            sum_error = 0
            for x, expected_output in batch:
                output = self.forward_propagation(x)
                current_error = [0.5 * (expected_output[i] - output[i]) ** 2 for i in range(len(output))]
                sum_error += current_error
            # calculate deltas for each weight layer
            # remove deltas*learning_rate from weights.

    def calc_deltas(self,expected_output,batch):
        """
        **CHECK CAREFULLY**
        for each item in batch:
            last layer:
                d = (expected - output)*sig'(output)
                dj/dw = (n1_output * d) + (n2_output * d) + (n3_output * d) + ...
            other layers:
                a = [sum(next_layer_delta*next_layer_weight for each neuron) for each delta value in next_layer_delta]
                d = [sig'(to_neurons_input(array))[i] * a[i] for i in size(a)]
                dj/dw = [from_layer_input[j] * d[j] for j in range(d)]
        :param expected_output:
        :return:
        """
        for i in range(len(self.layers)):
            i = len(self.layers) - 1 - i
            num_neurons = self.layers[i]
            if i == len(self.layers) - 1:  # last layer
                errors = []
                for j in range(num_neurons):
                    errors.append(expected_output[j] - self.recent_evaluation_inputs[i][j])
            else:
                # hl2
                errors = []
                next_layer_num_neurons = self.layers[i + 1]
                for j in range(num_neurons):
                    error = 0
                    for k in range(next_layer_num_neurons):
                        error += self.weights[i][j][k] * self.deltas[i + 1][k]
                    errors.append(error)

            # compute deltas
            output_deltas = []
            for j in range(num_neurons):
                output_deltas.append(
                    errors[j] * activation_function(self.recent_evaluation_inputs[i][j],
                                                    derivative=True))
            self.deltas[i] = output_deltas

    def save(self):
        print("Saving Network...")
        for i in range(len(self.weights)):
            with open("data\l{}_w".format(i), 'w+') as f:
                f.write(str(self.weights[i]))

    @staticmethod
    def calc_sum_error(expected_output, outputs):
        return (1 / len(expected_output)) * sum(
            [abs(expected_output[i] - outputs[i]) for i in range(len(expected_output))])

    @staticmethod
    def normalize_output(output):
        new_output = []
        for item in output:
            if item >= 0.5:
                new_output.append(1.0)
            else:
                new_output.append(0)
        return new_output


if __name__ == '__main__':
    nn = NeuralNetwork([28 * 28, 100, 16, 10])

    data = preprocess_data(training_dir)
    nn.train(data, epochs=10)
    nn.save()
    test_data = preprocess_data(testing_dir)
    accuracy = nn.test(test_data)
    print("accuracy = {}".format(accuracy * 100))
