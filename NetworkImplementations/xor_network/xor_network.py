from NonMatrixArtificialNeuralNetwork import NonMatrixArtificialNeuralNetwork

if __name__ == '__main__':
    # xor network
    nn = NonMatrixArtificialNeuralNetwork([2, 2, 1])
    data = [
        ([1.0, 1.0], [0]),
        ([0.0, 0.0], [0]),
        ([0.0, 1.0], [1]),
        ([1.0, 0.0], [1])]

    # nn = NonMatrixArtificialNeuralNetwork.load("./data")
    nn.train(data, epochs=10000, batch_size=4, lr=0.5, save_dir="./data")
    acc = nn.test(data, lambda x: [int(i + 0.5) for i in x])
    print("accuracy= ", acc, "%")
    for inp, out in data:
        x = inp
        # y_hat = 1 if nn.predict(x).data[0][0] >= 0.5 else 0
        y_hat = nn.predict(x)
        y = out
        print("===\nexpected= {}, we got= {}".format(y, y_hat))
