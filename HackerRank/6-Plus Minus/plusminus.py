#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def plusMinus(arr):
    positivo = 0
    negativo = 0
    zero = 0
    
    for n in range(len(arr)):
        if arr[n] > 0:
            positivo += 1
        elif arr[n] < 0:
            negativo += 1
        else:
            zero += 1
    print(f'{positivo / len(arr):.6f}')
    print(f'{negativo / len(arr):.6f}')
    print(f'{zero / len(arr):.6f}')
    
if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
