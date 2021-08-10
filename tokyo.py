test_cases = int(input())

for _ in range(test_cases):

    curr_bal,items = map(int,input().split())
    #items = int(input())
    exp200 =list(map(int,input().split()[:items]))
    cost200 = 0 
    count = 0
    for i in range(len(exp200)):
        if(exp200[i] % 200 == 0  ):
            cost200 += exp200[i]+20
            count+=1
    ans = curr_bal - cost200

    if(ans < 0):
        ans = curr_bal
    print(ans,end = " ")
    print(count)