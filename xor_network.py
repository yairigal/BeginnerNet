from NeuralNetwork import NeuralNetwork
import random
from math_functions import ReLU, dReLU

from NeuralNetworkMatrix import NeuralNetworkMatrix, softmax
from NonMatrixArtificialNeuralNetwork import NonMatrixArtificialNeuralNetwork

if __name__ == '__main__':
    # xor network
    w = [
        [[0.6, -0.3],
         [0.2, 0.8]],
        [
            [0.55,
             0.92]
        ]
    ]
    nn = NonMatrixArtificialNeuralNetwork([2, 4, 1])
    data = {
        "inputs":
            [
                [1.0, 1.0],
                [0.0, 0.0],
                [0.0, 1.0],
                [1.0, 0.0]
            ],

        "outputs":
            [
                [0],
                [0],
                [1],
                [1]
            ]
    }
    inputs = list(zip(data["inputs"], data["outputs"]))
    # for inp, out in inputs:
    #     x = inp
    #     # y_hat = 1 if nn.predict(x).data[0][0] >= 0.5 else 0
    #     y_hat = nn.predict(x)
    #     y = out
    #     print("===\nexpected= {}, we got= {}".format(y, y_hat))

    nn.train(data, epochs=100000, lr=0.65)

    for inp, out in inputs:
        x = inp
        # y_hat = 1 if nn.predict(x).data[0][0] >= 0.5 else 0
        y_hat = nn.predict(x)
        y = out
        print("===\nexpected= {}, we got= {}".format(y, y_hat))
