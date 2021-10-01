N = 4

def add(A,B,C):

	for i in range(N):
		for j in range(N):
			C[i][j] = A[i][j] + B[i][j]

# driver code
A = [ [1, 1, 1, 1],
	[2, 2, 2, 2],
	[3, 3, 3, 3],
	[4, 4, 4, 4]]

B= [ [1, 1, 1, 1],
	[2, 2, 2, 2],
	[3, 3, 3, 3],
	[4, 4, 4, 4]]

C=A[:][:] 

add(A, B, C)

print("Result matrix is")
for i in range(N):
	for j in range(N):
		print(C[i][j], " ", end='')
	print()
