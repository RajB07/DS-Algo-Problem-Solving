rows = int(input("enter rows"))
cols = int(input("enter cols"))
mat = []
for i in range(rows):
    a = []
    for j in range(cols): 
        a.append(int(input()))
    mat.append(a)

print(mat)

b = [[0 for x in range(rows)] for y in range(cols)] 
for i in range(rows):
    for j in range(cols):
        b[j][i] = mat[i][j]
transposed = []

for i in range(cols):
    a=[]
    for j in range(rows):
        a.append(b[i][j])
    transposed.append(a)
print(transposed)