s, t = (input() for i in range(2))
count = 0
for i in range(len(s) - len(t) + 1):
    if s[i:i + len(t)] == t:
        count += 1
print(count)
