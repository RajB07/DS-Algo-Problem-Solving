# LINK  https://www.hackerrank.com/challenges/2d-array/problem?h_l=interview&playlist_slugs%5B%5D=nutanix


#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'hourglassSum' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY arr as parameter.
#

a = [[1,1,1],[0,1,0],[1,1,1]] 

def check(x,y):
    s = 0
    for i in range(3):
        for j in range(3):
            s += arr[i+x][j+y] * a[i][j]    
    return s    



def hourglassSum(arr):
    n = 6
    mx = -float('inf')
    for i in range(0,4):
        for j in range(0,4):
            mx = max(mx,check(i,j))
    # Write your code here
    return mx        
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

    result = hourglassSum(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
