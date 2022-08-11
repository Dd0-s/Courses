import re

x = input()
y = re.findall(r'(red|blue|green|\/)', x)
n = 0
d = {
    "red":0,
    "green":0,
    "blue":0
}

for i in y:
    if i != '/':
        n += 1
        d[i] += n
    else:
        n-=1

print(d['red'], d['green'], d['blue'])
