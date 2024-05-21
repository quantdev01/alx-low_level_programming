#!/usr/bin/python3

matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
# temp = matrix.copy()

temp = [item if not isinstance(item, list) else item[:] for item in matrix]

square = lambda n : n * n

for i in range(len(matrix)):
    for j in range(len(matrix[0])):
        temp[i][j] = square(matrix[i][j])


print('Original list')
print(matrix)


print('Temp matrix')
print(temp)
