d = int(input())
m = set()
a = set()
for i in range(d):
    word = input()
    m.add(word.lower())
l = int(input())
for i in range(l):
    sent = [i for i in input().split()]
    for j in range(len(sent)):
        if(sent[j].lower() not in m):
            a.add(sent[j].lower())
for i in a:
    print(i)
