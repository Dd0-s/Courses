def modify_list(l):
    for i in l:
        if(i % 2 == 1):
            l.remove(i)
    for i in range(len(l) - 1, -1, -1):
        if(l[i] % 2 == 1):
            l.remove(l[i])
        else:
            l[i] = l[i] // 2
