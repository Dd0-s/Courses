a = [int(i) for i in input().split()]
b = []
if(len(a) == 1):
    print(a[0])
else:
    for i in range(len(a)):
        b.append(a[i - 1] + a[(i + 1) % len(a)])
    for i in range(len(b)):
        print(b[i], end=" ")
