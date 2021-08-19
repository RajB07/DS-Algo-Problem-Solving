#Beginners questions on 2d arrays

rows = int(input("enter rows"))
cols = int(input("enter cols"))
mat = []
for i in range(rows):
    a = []
    for j in range(cols): 
        a.append(int(input()))
    mat.append(a)

print(mat)
sum =0
for i in range(rows):
    for j in range(cols):
        if(i==j or i+j ==rows-1):
            sum+=mat[i][j]

print(sum)
