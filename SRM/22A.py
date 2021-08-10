testcases = int(input())

for _ in range(testcases):
    n = int(input()) 
    count = 0  
    for i in range(n,0,-1):
        (dost, haana) = input().split() 
        if( haana == "YES"):
            count+=1
    print(count)