# testcases = int(input())
# for _ in range(testcases):
#     n = int(input())
#     friendnames = {str(input()):str(input())  for i in range(n) }
#     print(friendnames)
#     count = 0 

#     for k in friendnames.values():
#         if( k =="YES"):
#             count+=1
#     print(count)

testcases = int(input())

for _ in range(testcases):
    n = int(input()) 
    count = 0  
    for i in range(n,0,-1):
        (dost, haana) = input().split() 
        if( haana == "YES"):
            count+=1
    print(count)