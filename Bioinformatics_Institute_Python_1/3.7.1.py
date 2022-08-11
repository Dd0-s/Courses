n = int(input())
m = {}
for i in range(n):
    match = [i for i in input().split(";")]
    if(match[0] not in m):
        m[match[0]] = [0] * 5
    if(match[2] not in m):
        m[match[2]] = [0] * 5    
    m[match[0]][0] += 1
    m[match[2]][0] += 1
    if(int(match[1]) > int(match[3])):
        m[match[0]][1] += 1
        m[match[0]][4] += 3
        m[match[2]][3] += 1
    elif(int(match[1]) < int(match[3])):
        m[match[0]][3] += 1
        m[match[2]][1] += 1
        m[match[2]][4] += 3
    else:
        m[match[0]][2] += 1
        m[match[0]][4] += 1
        m[match[2]][2] += 1
        m[match[2]][4] += 1
for key, value in m.items():
    print(key, end=":")
    for i in value:
        print(i, end=" ")
    print()
