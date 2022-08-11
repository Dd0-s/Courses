s = input()
letter = s[0]
count = 0
st = ""
for i in range(len(s)):
    if(s[i] == letter):
        count += 1
    else:
        st += letter + str(count)
        letter = s[i]
        count = 1
st += letter + str(count)    
print(st)
