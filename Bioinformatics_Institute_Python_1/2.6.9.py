lst = [int(i) for i in input().split()]
x = int(input())
b = []
for i in range(len(lst)):
    if(lst[i] == x):
        b.append(i)
if(len(b) == 0):
    print("Отсутствует")
else:
    for i in range(len(b)):
        print(b[i], end=" ")
