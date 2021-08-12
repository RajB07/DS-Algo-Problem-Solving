import math

testcases = int(input())
for _ in range(testcases):
    n = int(input())
    total = 0 
    for i in range(n,0,-1):
        (name,conn,response) = (input().split()) 
        if(int(response)==1):
            total+= math.ceil(int(conn)/2)
        elif(int(response)==2):
            total+= int(conn)
    print(total)
        


