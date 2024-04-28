#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s):
    horas = int(s[:2])
    minutos_segundos = s[2:8]
    meridiano = s[8:]
    if meridiano == "PM" and horas != 12:
        horas += 12
    elif meridiano == "AM" and horas == 12:
        horas = 0
    return "{:02d}{}".format(horas, minutos_segundos)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    fptr.write(result + '\n')

    fptr.close()
