s = [i for i in input().split()]
m = {}
for i in s:
    if(m.get(i.lower()) == None):
        m[i.lower()] = 1
    else:
        m[i.lower()] += 1
for key, value in m.items():
    print(key, value)
