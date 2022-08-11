a = int(input())
b = int(input())
c = int(input())
d = int(input())
print("", end="\t")
for i in range(c, d + 1):
    print(i, end="\t")
print("", end="\n")
for i in range(a, b + 1):
    print(i, end="\t")
    for j in range(c, d + 1):
        print(i * j, end="\t")
    print("", end="\n")
