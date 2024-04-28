#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'gradingStudents' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY grades as parameter.
#

def gradingStudents(grades):
    gradesRound = []
    for valor in range(len(grades)):
        if grades[valor] < 38:
            gradesRound.append(grades[valor])
        else:
            faltante = 5 - (grades[valor] % 5)
            if(faltante < 3):
                numeroRound = grades[valor] + faltante
                gradesRound.append(numeroRound)
            else:
                gradesRound.append(grades[valor])
    return gradesRound

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    grades_count = int(input().strip())

    grades = []

    for _ in range(grades_count):
        grades_item = int(input().strip())
        grades.append(grades_item)

    result = gradingStudents(grades)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
