n, number = map(int, input().split())
letters = {}
for i in range(n):
    s = input()
    letter = s[0]
    code = s[3:]
    letters[code] = letter
s = input()
answer = ""
st = ""
for i in s:
    st += i
    if st in letters:
        answer += letters[st]
        st = ""
print(answer)
