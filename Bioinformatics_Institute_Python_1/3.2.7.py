n = int(input())
m = {}
for i in range(n):
    x = int(input())
    if(m.get(x) == None):
       m[x] = f(x)
    print(m[x]) 
