# LINK = https://www.hackerrank.com/challenges/ctci-ransom-note/problem?h_l=interview&playlist_slugs%5B%5D=arcesium

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'checkMagazine' function below.
#
# The function accepts following parameters:
#  1. STRING_ARRAY magazine
#  2. STRING_ARRAY note
#

def checkMagazine(magazine, note):
    # magazine = magazine.split(' ')
    # note = note.split(' ')
    
    mag = {}
    for m in magazine:
        mag[m] = mag.get(m,0) + 1
    for n in note:
        value = mag.get(n,0)
        if mag.get(n,0) == 0:
            print("No")
            return 
        mag[n] -=1
    print('Yes')
    
    # Write your code here

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    m = int(first_multiple_input[0])

    n = int(first_multiple_input[1])

    magazine = input().rstrip().split()

    note = input().rstrip().split()

    checkMagazine(magazine, note)
