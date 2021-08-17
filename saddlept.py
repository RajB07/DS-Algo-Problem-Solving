rows = int(input("enter rows"))
cols = int(input("enter cols"))

mat = []

for row in range(rows):
    a= []
    for col in range(cols):
        a.append(int(input()))
    mat.append(a)
    
print(mat)

min = 0
max = 0
coord = [[0 for x in range(rows)] for y in range(cols)] 

for i in range(0,rows):
	min = mat[i][0]
	for j in range(0,cols):
		if (min >= mat[i][j]):
			min = mat[i][j]
			coord[0][0] = i
			coord[0][1] = j
		j = coord[0][1]
        
		max = mat[0][j]

	for k in range(0,cols):
		if (max <= mat[k][j]):
			max = mat[i][j]
			coord[1][0] = k
			coord[1][1] = j

	if (min == max):
		if (coord[0][0] == coord[1][0] and coord[0][1] == coord[1][1]):
			print(" Saddle point (",coord[0][0] , "," , coord[0][1],") " , max )