a = int(input())
b = int(input())
a1 = a
b1 = b
while a != b:
    if (a > b):
        a -= b
    else:
        b -= a
print(a1 * b1 // a)
