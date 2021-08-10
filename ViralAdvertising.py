
#PROBLEM LINK : https://www.hackerrank.com/challenges/strange-advertising/problem

#!/bin/python3
n = int(input())
likes = 5
cumulat = 2
for i in range(n-1):
    likes = likes//2*3
    cumulat = cumulat +likes//2
    
print(cumulat)

        
    
