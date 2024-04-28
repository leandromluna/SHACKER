#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'birthdayCakeCandles' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY candles as parameter.
#
'''
 int valor = 0;
        int max = candles[0];
        for(int i = 0; i < candles.size(); i++){
            if(candles[i] > max){
                max = candles[i];
                valor = 1;
            } else if(candles[i] == max){
                valor++;
            }
        }
        return valor;
'''
def birthdayCakeCandles(candles):
    valor = 0
    max_valor = max(candles)
    print(max_valor)
    for i in range(len(candles)):
        if max_valor == candles[i]:
            print(i)
            valor += 1
    return valor
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    candles_count = int(input().strip())

    candles = list(map(int, input().rstrip().split()))

    result = birthdayCakeCandles(candles)

    fptr.write(str(result) + '\n')

    fptr.close()
