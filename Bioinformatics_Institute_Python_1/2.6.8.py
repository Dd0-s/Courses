n = int(input())
k = 1
sum = 0
while True:
    for i in range(k):
        if(sum < n):
            print(k, end=" ")
            sum += 1
    if(sum >= n):
        break
    k += 1
