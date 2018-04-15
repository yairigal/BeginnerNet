import random

from math_functions import sigmoid, dsigmoid


def printing(array):
    """
    Pretty print matrix
    """
    n, m = len(array), len(array[0])
    data_str = [[str(cell) for cell in row] for row in array]
    lens = [max(map(len, col)) for col in zip(*data_str)]
    fmt = '\t'.join('{{:{}}}'.format(x) for x in lens)
    table = [fmt.format(*row) for row in data_str]
    sizes = '[' + str(n) + ' x ' + str(m) + ']'
    print('\n'.join([sizes] + table))


class NonMatrixArtificialNeuralNetwork:
    def __init__(self, layers, lr=0.7):
        self.layers = layers
        self.lr = lr
        self.W = []
        self.Z = []
        self.A = []
        self.B = [[random.uniform(-1,1) for _ in range(layers[0])]]
        for i in range(1, len(layers)):
            w = [[random.uniform(-1, 1) for _ in range(layers[i])] for _ in
                 range(layers[i - 1])]
            b = [random.uniform(-1, 1) for _ in range(layers[i])]
            self.W.append(w)
            self.B.append(b)

    def forward_prop(self, x):
        output = x
        self.A = [x]
        self.Z = [x]
        for k in range(len(self.W)):
            new_output = []
            current_z = []
            current_a = []
            # print("weight:")
            # printing(self.W[k])
            for j in range(len(self.W[k][0])):
                summer = 0
                for i in range(len(output)):
                    summer += output[i] * self.W[k][i][j]
                summer += self.B[k][j]
                current_z.append(summer)
                summer = sigmoid(summer)
                current_a.append(summer)
                new_output.append(summer)
            self.Z.append(current_z)
            self.A.append(current_a)
            output = new_output
        return output

    def back_prop(self, x, y):
        y_hat = self.forward_prop(x)
        cost_derivative = self.dcost(y, y_hat)
        print("cost:", sum([0.5 * (y[i] - y_hat[i]) ** 2 for i in range(len(y))]))
        deltas = [None] * len(self.layers)
        deltas[-1] = [cost_derivative[i] * dsigmoid(self.Z[-1][i]) for i in range(len(cost_derivative))]
        changes = [None] * len(self.W)
        changes[-1] = self.calc_changes_for_weights(deltas, len(self.layers) - 2)
        for k in reversed(range(len(self.layers) - 1)):
            deltas[k] = self.calc_deltas_for_current_layer(k, deltas)
            changes[k] = self.calc_changes_for_weights(deltas, k)

        return changes, deltas

    def train(self, data, epochs=500):
        i = 0
        for epoch in range(epochs):
            data = self.shuffle_data(data)
            inputs, outputs = data.values()
            w_changes = []
            b_changes = []
            for i in range(len(inputs)):
                x = inputs[i]
                y = outputs[i]
                w_chgs, b_chgs = self.back_prop(x, y)
                w_changes.append(w_chgs)
                b_changes.append(b_chgs)
            self.update_weights_and_biases(w_changes, b_changes)

    def update_weights_and_biases(self, w_changes, b_changes):
        # for k in range(len(self.W)):
        #     for i in range(len(self.W[k])):
        #         for j in range(len(self.W[k][i])):
        #             summer = 0
        #             for l in range(len(all_changes)):
        #                 summer += all_changes[l][k][i][j]
        #             self.W[k][i][j] -= self.lr * (summer / len(all_changes))
        w_change = []
        for i in range(len(self.W)):
            change_row = []
            for j in range(len(self.W[i])):
                change_col = []
                for k in range(len(self.W[i][j])):
                    winter = 0
                    for l in range(len(w_changes)):
                        winter += w_changes[l][i][j][k]
                    change_col.append(winter / len(w_changes))
                change_row.append(change_col)
            w_change.append(change_row)

        b_change = []
        for i in range(len(self.layers)):
            row = []
            for j in range(self.layers[i]):
                winter = 0
                for k in range(len(b_changes)):
                    winter += b_changes[k][i][j]
                row.append(winter / len(b_changes))
            b_change.append(row)

        # update
        for k in range(len(self.W)):
            current_w = self.W[k]
            for i in range(len(current_w)):
                for j in range(len(current_w[i])):
                    current_w[i][j] -= self.lr * w_change[k][i][j]
            self.W[k] = current_w

        for k in range(len(self.layers)):
            current_biases = self.B[k]
            for i in range(self.layers[k]):
                current_biases[i] -= self.lr * b_change[k][i]
            self.B[k] = current_biases

    def shuffle_data(self, data):
        inputs = data["inputs"]
        outputs = data["outputs"]
        combined = list(zip(inputs, outputs))
        random.shuffle(combined)
        inputs[:], outputs[:] = zip(*combined)
        return {"inputs": inputs, "outputs": outputs}

    def dcost(self, y, y_hat):
        assert len(y) == len(y_hat)
        return [y_hat[i] - y[i] for i in range(len(y))]

    def calc_deltas_for_current_layer(self, k, deltas):
        deltas_output = []
        for i in range(self.layers[k]):
            holder = []
            for j in range(len(deltas[k + 1])):
                d = deltas[k + 1][j]
                w = self.W[k][i][j]
                mul = d * w
                holder.append(mul)
            deltas_output.append(sum(holder) * dsigmoid(self.Z[k][i]))
        return deltas_output

    def calc_changes_for_weights(self, deltas, k):
        changes = []
        for i in range(len(self.W[k])):
            new_row = []
            for j in range(len(self.W[k][i])):
                d = deltas[k + 1][j]
                a = self.A[k][i]
                result = d * a
                new_row.append(result)
            changes.append(new_row)
        return changes

    def predict(self, x):
        return self.forward_prop(x)


if __name__ == '__main__':
    nn = NonMatrixArtificialNeuralNetwork([2, 2, 1])
    print("output", nn.forward_prop([1, 1]))
