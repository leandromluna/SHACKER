#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'diagonalDifference' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY arr as parameter.
#
# int sum_right = 0;
#      int sum_left = 0;
#       for (int i = 0; i < arr.size(); i++){
#           sum_right += arr[i][i];
#         sum_left += arr[i][arr.size() - 1- i];
#      }
#       return abs(sum_right - sum_left);
def diagonalDifference(arr):
    sum_right = 0
    sum_left = 0
    for n in range(len(arr)):
        sum_right += arr[n][n]
        sum_left += arr[n][len(arr) -1 -n]
    return abs(sum_right - sum_left)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
