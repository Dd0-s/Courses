def add(namesp, arg):
    args[namesp].append(arg)

def create(namespace, parent):
    namespaces.update({namespace: parent})
    args.update({namespace: []})

def get(namesp, arg):
    if arg in args[namesp]:
        print(namesp)
    elif namespaces[namesp] == None:
        print(None)
    else:
        get(namespaces[namesp], arg)

n = int(input())
namespaces = {'global': None}
args = {"global": []}
        
for i in range(n):
    cmd, namesp, arg = input().split()
    if cmd == "add":
        add(namesp, arg)
    elif cmd == "create":
        create(namesp, arg)
    else:
        get(namesp, arg)
