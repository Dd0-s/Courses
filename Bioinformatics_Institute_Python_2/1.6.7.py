arg = False

def check(a, b):
    global arg
    if a == b:
        arg = True
    if a in classes[b]:
        arg = arg or True
    else:
        for i in classes[b]:
            check(a, i)
    arg = arg or False
    
n = int(input())
classes = {}
for i in range(n):
    description = input().split()
    classes.update({description[0]: description[2:]})
q = int(input())
for i in range(q):
    test = input().split()
    check(test[0], test[1])
    if arg == True:
        print("Yes")
    else:
        print("No")
    arg = False
