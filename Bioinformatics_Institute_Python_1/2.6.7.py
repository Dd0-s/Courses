s = 0
k = 0
while True:
    n = int(input())
    s += n
    k += n * n
    if(s == 0):
        break
print(k)
