#A collection of functions for Neural Networks implementations.


import numpy as np 



def identity(x):
    return x

def binary_step(x):
    #modifies x
    x[x>=0]=1
    x[x<0]=0
    return x

def sigmoid(x):
    return 1. / (1 + np.exp(-x))

def sigmoid_derivative(x)
    return x * (1 - x)

def tanh(x):
    return np.tanh(x)

def tanh_derivative(x):
    return 1. - (x ** 2)

def relu(x):
    x * (x > 0)

def inplace_max_relu(x):
    #modifies x
    return np.maximum(x, 0, x)

def fancy_relu(x):
    #modifies x
    #fastest method
    x[x<0]=0
    return x

def relu_derivative(x):
    return 1. * (x > 0)


def arctan(x):
    return np.ractan(x)

