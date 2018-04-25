import random

from pickle import dump, load

from NonMatrixArtificialNeuralNetwork import NonMatrixArtificialNeuralNetwork

max_digit = 10


def generate_random_excersise():
    first_dig = random.randint(0, max_digit)
    second_dig = random.randint(0, max_digit)
    output = [0] * (max_digit ** 2 + 1)
    output[first_dig * second_dig] = 1
    return [first_dig / max_digit, second_dig / max_digit], output


def generate_dataset(size=10000):
    return [generate_random_excersise() for _ in range(size)]


def normalize(y):
    output = [0] * (max_digit ** 2 + 1)
    output[y.index(max(y))] = 1
    return output


if __name__ == '__main__':
    with open("./dataset", "wb+") as f:
        data = generate_dataset()
        dump(data, f)
    with open("./dataset", "rb") as f:
        data = load(f)
    try:
        nn = NonMatrixArtificialNeuralNetwork.load("./data")
    except:
        nn = NonMatrixArtificialNeuralNetwork([2, max_digit, max_digit ** 2 + 1])
    nn.train(data, epochs=5000, batch_size=250, lr=1.3, save_dir="./data", log=True)
    dig = 3
    print("{} * {}=".format(dig, dig),
          nn.predict([dig / max_digit, dig / max_digit], normalization_function=normalize).index(1))
    ans = nn.test(data, normal=normalize)
    print("accuracy=", ans)
