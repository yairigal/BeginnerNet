from math import exp


def activation_function(x, derivative=False):
    if not derivative:
        return 1.0 / (1.0 + exp(-x))
    else:
        a = 1.0 / (1.0 + exp(-x))
        return a * (1 - a)


def sigmoid(x):
    return 1.0 / (1.0 + exp(-x))


def dsigmoid(x):
    sig = sigmoid(x)
    return sig * (1.0 - sig)


def ReLU(x):
    return max(0, x)


def dReLU(x):
    if x < 0:
        return 0
    else:
        return 1
