#Beginners questions on 2d arrays

rows = int(input("Enter rows"))
cols = int(input("enter cols"))

mat = []

for i in range(rows):
    a=[]
    for j in range(cols):
        a.append(int(input()))
    mat.append(a)

print(mat)
flag = True

for i in range(rows):
    for j in range(i+1,cols):
        print(i,j)
        if(mat[i][j]!=0):
            flag = False
        
if(flag == True):
    print("Yes")
else:
    print("no")

