def main():
    s = input()
    s1 = ''
    cnt = 0
    lst1 = []
    lst2 = []
    m1 = {}
    m2 = {}
    m_final = {}

    for i in s:
        if i not in m1.keys():
            m1[i] = 1
        else:
            m1[i] += 1

    for i in m1:
        lst1.append((m1[i], i))
        cnt += 1

    if cnt == 1:
        abc = '0' * len(s)
        print(1, len(abc))
        print(lst1[0][1], 0, sep=': ')
        print(abc)
    else:
        while len(lst1) > 2:
            min1 = min(lst1)
            lst1.remove(min1)
            min2 = min(lst1)
            lst1.remove(min2)

            new_name = str(min1[1]) + str(min2[1])
            new_rate = min1[0] + min2[0]

            m2[new_name] = [min1[1], min2[1]]
            lst1.append((new_rate, new_name))

        lst2.append((lst1[0][1], '1'))
        lst2.append((lst1[1][1], '0'))

        while len(lst2) != cnt:
            for i in m2.keys():
                for j in lst2:
                    if i == j[0]:
                        lst2.append((m2[i][0], j[1] + '1'))
                        lst2.append((m2[i][1], j[1] + '0'))
                        lst2.remove(j)

        for i in lst2:
            m_final[i[0]] = i[1]

        for i in s:
            s1 += m_final[i]
        print(cnt, len(s1))
        for i in m_final.keys():
            print(i, m_final[i], sep=': ')
        print(s1)

if __name__ == '__main__':
    main()
