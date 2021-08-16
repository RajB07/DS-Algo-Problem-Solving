#PROBLM LINK : https://www.hackerrank.com/challenges/chocolate-feast/problem

import math
import os
import random
import re
import sys


def chocolateFeast(n, c, m):
    # Write your code here
    chocapiece = n//c
    wrapper = chocapiece
    while wrapper>=m:
        chocapiece+= wrapper//m
        wrapper = wrapper//m + wrapper%m
    
    return chocapiece
        
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        first_multiple_input = input().rstrip().split()

        n = int(first_multiple_input[0])

        c = int(first_multiple_input[1])

        m = int(first_multiple_input[2])

        result = chocolateFeast(n, c, m)

        fptr.write(str(result) + '\n')

    fptr.close()

