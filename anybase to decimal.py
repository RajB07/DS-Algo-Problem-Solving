#convert any base number to decimal 
#eg n = 1111 base = 2 ans = 15

n = int(input())
ans = 0
powers = 1
base= int(input())
rem = 0
while(n>0):
    rem = int(n % 10)
    n = n/10
    ans =  ans + rem*powers
    powers = powers*base
print(ans)
