s = input()
count_1 = s.upper().count("C")
count_2 = s.upper().count("G")
print(((count_1 + count_2)/len(s)) * 100)
