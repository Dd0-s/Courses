a = [int(i) for i in input().split()]
a.sort()
pointer = a[0]
count = 0
for i in range(len(a)):
    if(pointer == a[i]):
        count += 1
    else:
        if(count > 1):
            print(pointer, end=" ")
        count = 1
        pointer = a[i]
if(count > 1):
    print(pointer, end=" ")
