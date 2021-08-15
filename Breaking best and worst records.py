#PROBLEM LINK : https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem

def breakingRecords(scores):
    # Write your code here
    maxelt = scores[0]
    minelt = scores[0]
    
    count_max = 0
    count_min = 0 
    
    for i in range(len(scores)):
        if(scores[i]> maxelt):
            maxelt = scores[i]
            count_max+=1
        if(scores[i] < minelt):
            minelt = scores[i]
            count_min+=1
    # fin.append(count_max)
    # fin.append(count_min)

    return count_max,count_min
 

scores = list(map(int, input().rstrip().split()))

result = breakingRecords(scores)
