import os
import sys

sys.path.append('../../')

from PIL import Image
from NonMatrixArtificialNeuralNetwork import NonMatrixArtificialNeuralNetwork

training_dir = r"C:\Users\yairi\Desktop\Mnist\training"
testing_dir = r"C:\Users\yairi\Desktop\Mnist\testing"


def normal(x):
    i = x.index(max(x))
    out = [0] * len(x)
    out[i] = 1
    return out


def preprocess_data(dir, precentage=1.0):
    categories = os.listdir(dir)
    data = []
    print("Started preprocessing")
    for category in categories:
        expected_value = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
        expected_value[int(category)] = 1.0
        files = os.listdir(dir + "\\" + category)
        files = files[:int(len(files) * precentage)]
        num_files = len(files)
        i = 0
        arr = []
        for file in files:
            if i % 1000 == 0:
                print("file {}/{} at category {}".format(i, num_files, category))
            file_dir = dir + "\\" + category + "\\" + file
            pixels = get_pixels_for_pic(file_dir)
            arr.append((pixels, expected_value))
            i += 1
        data += arr
    return data


def get_pixels_for_pic(pic_dir):
    img = Image.open(pic_dir)
    pix = img.load()
    pixels = []
    for i in range(28):
        for j in range(28):
            pixels.append(pix[i, j] / 255)
    return pixels


if __name__ == '__main__':
    if os.path.exists("./data"):
        nn = NonMatrixArtificialNeuralNetwork.load("./data")
    else:
        nn = NonMatrixArtificialNeuralNetwork([28 ** 2, 30, 10])

    choice = input("=== Menu ===\n\t"
                   "1. Train network\n\t"
                   "2. Test network\n\t"
                   "3. predict specific picture\n\t"
                   "4. print latest accuracy\n\t")
    choice = int(choice)
    if choice == 1:
        training_data = preprocess_data(training_dir)
        test_data = preprocess_data(testing_dir)
        nn.train(training_data, batch_size=10, epochs=100, lr=0.5, test=True, test_data=test_data, normal_func=normal,
                 log=True, save_dir="./data")
    elif choice == 2:
        test_data = preprocess_data(testing_dir)
        print("accuracy=", nn.test(test_data, normal), "%")
    elif choice == 3:
        dir = input("enter path for pic\n").replace("\"", "")
        pic = get_pixels_for_pic(dir)
        print("NN prediction=", nn.predict(pic, normal).index(1))
    elif choice == 4:
        print("lastest acc=", nn.last_acc, "%")
