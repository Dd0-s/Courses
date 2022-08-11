c = []
while True:
    a = input()
    if(a != "end"):
        b = [int(i) for i in a.split()]
        c.append(b)
    else:
        break
d = []
for i in range(len(c)):
    d.append([0] * len(c[0]))
for i in range(len(c)):
    for j in range(len(c[0])):
        d[i][j] = c[i][j - 1] + c[i - 1][j] + c[i][(j + 1) % len(c[0])] + c[(i + 1) % len(c)][j]
        print(d[i][j], end=" ")
    print()
