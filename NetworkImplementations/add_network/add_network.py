import random

from pickle import dump, load

from NonMatrixArtificialNeuralNetwork import NonMatrixArtificialNeuralNetwork


def generate_random_excersise():
    first_dig = random.randint(0, 10)
    second_dig = random.randint(0, 10)
    output = [0] * 21
    output[first_dig + second_dig] = 1
    return [first_dig / 10, second_dig / 10], output


def generate_dataset(size=10000):
    return [generate_random_excersise() for _ in range(size)]


def normalize(y):
    output = [0] * 21
    output[y.index(max(y))] = 1
    return output


if __name__ == '__main__':
    # with open("./dataset", "wb+") as f:
    #     data = generate_dataset()
    #     dump(data, f)
    with open("./dataset", "rb") as f:
        data = load(f)
    try:
        nn = NonMatrixArtificialNeuralNetwork.load("./data")
    except:
        nn = NonMatrixArtificialNeuralNetwork([2, 10, 21])
    #nn.train(data, epochs=5000, batch_size=250, lr=0.9, save_dir="./data", log=True)
    dig = 3
    print("{} + {}=".format(dig,dig), nn.predict([dig / 10, dig / 10], normalization_function=normalize).index(1))
    ans = nn.test(data, normal=normalize)
    print("accuracy=", ans)
