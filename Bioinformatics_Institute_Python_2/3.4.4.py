import json

def func(x):
    for i in js:
        if x in i["parents"]:
            box.add(i["name"])
            func(i["name"])

box = {1}
A = {}
js = json.loads(input())

for i in js:
    func(i["name"])
    A[i["name"]] = len(box)
    box = {1}

for i in sorted(A):
    print(i, ':', A[i])
