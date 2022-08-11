str1 = input()
str2 = input()
m1 = {}
m2 = {}
for i in range(len(str1)):
    m1[str1[i]] = str2[i]
    m2[str2[i]] = str1[i]
text1 = input()
answer1 = ""
for i in range(len(text1)):
    answer1 += m1[text1[i]]
text2 = input()
answer2 = ""
for i in range(len(text2)):
    answer2 += m2[text2[i]]
print(answer1)
print(answer2)
