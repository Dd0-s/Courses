ans = 0
num = 0
for i in range(len(objects)):
    for j in range(i + 1, len(objects)):
        if(objects[i] is objects[j]):
            num += 1
    if (num == 0):
        ans += 1
    num = 0
print(ans)
