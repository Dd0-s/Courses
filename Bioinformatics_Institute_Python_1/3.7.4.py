n = int(input())
x = 0
y = 0
for i in range(n):
    dir = [i for i in input().split()]
    if(dir[0] == "север"):
        x += int(dir[1]) 
    elif(dir[0] == "юг"):
        x -= int(dir[1]) 
    elif(dir[0] == "восток"):
        y += int(dir[1])
    else:
        y -= int(dir[1])
print(y, x)
