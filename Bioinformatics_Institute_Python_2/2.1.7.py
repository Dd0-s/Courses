def finder(child, parent):
    if child == parent:
        return True
    for p in ancestors[child]:
        if finder(p, parent):
            return True
    return False

ancestors = {}
for i in range(int(input())):
    inp = input().split()
    ancestors[inp[0]] = inp[2:]


fin = []
for i in range(int(input())):
    inp = input()
    for u in fin:
        if finder(inp, u):
            print(inp)
            break
    fin.append(inp)
