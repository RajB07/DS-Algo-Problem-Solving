#!/bin/python3
#simple implementation of bubble sort with a very small modification. Main code part is of bubble sort original code

## LINK
## https://www.hackerrank.com/challenges/ctci-bubble-sort/problem?h_l=interview&playlist_slugs%5B%5D=nutanix

import math
import os
import random
import re
import sys

#
# Complete the 'countSwaps' function below.
#
# The function accepts INTEGER_ARRAY a as parameter.
#

def countSwaps(a):
    n = len(a)
    swap = 0
    for i in range(0,n-1):
        for j in range(0,n-i-1):
            if a[j] > a[j+1]:
                a[j],a[j+1] = a[j+1],a[j]
                swap += 1
    print("Array is sorted in",swap,"swaps.")
    print("First Element:",a[0])
    print("Last Element:",a[-1])
     
    # Write your code here

if __name__ == '__main__':
    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    countSwaps(a)
