rows = int(input("enter rows"))
cols = int(input("enter cols"))
mat = []
for i in range(rows):
    a = []
    for j in range(cols): 
        a.append(int(input()))
    mat.append(a)

print(mat)
sum1=0

for i in range(1):
    for j in range(cols-1):
        sum1+=mat[i][j]
print(sum1)

sumlast = 0
for i in range(rows):
    for j in range(1,cols):
        if(i==rows-1):
            sumlast+=mat[i][j]
sumd=0
for i in range(rows):
    for j in range(cols):
        if(i+j==rows-1):
            sumd+=mat[i][j]

print(sumd+sum1+sumlast)