rows = int(input("enter rows"))
cols = int(input("enter cols"))
mat = []
for i in range(rows):
    a = []
    for j in range(cols): 
        a.append(int(input()))
    mat.append(a)

print(mat)
    
for i in range(rows):
    for j in range(i+1, cols):
        temp = mat[i][j]
        mat[i][j] = mat[j][i]
        mat[j][i] = temp
transposed = []
for i in range(rows):
    a=[]
    for j in range(cols):
        a.append(mat[i][j])
    transposed.append(a)
print(transposed)


