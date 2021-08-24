#converting any decimal number to any base
n = int(input())
ans = 0
powers = 1
base= int(input())
rem = 0
while(n>0):
    rem = int(n % base)
    n = n/base
    ans =  ans + rem*powers
    powers = powers*10
print(ans)
