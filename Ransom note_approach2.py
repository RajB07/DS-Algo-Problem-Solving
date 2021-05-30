#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter
#
# Complete the 'checkMagazine' function below.
#
# The function accepts following parameters:
#  1. STRING_ARRAY magazine
#  2. STRING_ARRAY note
#

def checkMagazine(magazine, note):
    # Write your code here
    counter1 = Counter(magazine)
    counter2 = Counter(note)    
    
    if(counter2-counter1 == {}): #run with examples, where len(counter1)>len(counter2)
        print("Yes")
    else:
        print("No")      
    return 1

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    m = int(first_multiple_input[0])

    n = int(first_multiple_input[1])

    magazine = input().rstrip().split()

    note = input().rstrip().split()

    checkMagazine(magazine, note)
