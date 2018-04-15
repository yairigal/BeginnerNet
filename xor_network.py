from NeuralNetwork import NeuralNetwork
import random

from NeuralNetworkMatrix import NeuralNetworkMatrix, softmax
from NonMatrixArtificialNeuralNetwork import NonMatrixArtificialNeuralNetwork

if __name__ == '__main__':
    # xor network
    nn = NonMatrixArtificialNeuralNetwork([2, 2,1], lr=30)
    data = {
        "inputs":
            [
                [0.0, 0.0],
                [0.0, 1.0],
                [1.0, 0.0],
                [1.0, 1.0]
            ],

        "outputs":
            [
                [0],
                [1],
                [1],
                [0]
            ]
    }
    inputs = list(zip(data["inputs"], data["outputs"]))
    # for inp, out in inputs:
    #     x = inp
    #     # y_hat = 1 if nn.predict(x).data[0][0] >= 0.5 else 0
    #     y_hat = nn.predict(x)
    #     y = out
    #     print("===\nexpected= {}, we got= {}".format(y, y_hat))

    nn.train(data, epochs=10000)

    for inp, out in inputs:
        x = inp
        # y_hat = 1 if nn.predict(x).data[0][0] >= 0.5 else 0
        y_hat = nn.predict(x)
        y = out
        print("===\nexpected= {}, we got= {}".format(y, y_hat))
