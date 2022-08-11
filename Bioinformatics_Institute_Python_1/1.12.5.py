x = int(input())
y = int(input())
z = int(input())
if(x < y):
    m = y
    y = x
    x = m
if(x < z):
    m = z
    z = x
    x = m
if(y < z):
    m = z
    z = y
    y = m
print(x)
print(z)
print(y)
