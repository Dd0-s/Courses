n = int(input())
a = []
for i in range(n):
    a.append([0] * n)
k = 1
for j in range(n // 2):
    for i in range(n - 1 - 2 * j):
        a[i + j][j] = k
        k += 1
    for i in range(n - 1 - 2 * j):
        a[n - 1 - j][i + j] = k
        k += 1
    for i in range(n - 1 - 2 * j, 0, -1):
        a[i + j][n - 1 - j] = k
        k += 1
    for i in range(n - 1 - 2 * j, 0, -1):
        a[j][i + j] = k
        k += 1
if(n % 2 == 1):
    a[(n - 1) // 2][(n - 1) // 2] = n * n
for i in range(n):
    for j in range(n):
        print(a[j][i], end=" ")
    print()
