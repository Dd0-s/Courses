def step_calculate(n):

    min_operations = [-1]
    inf = 10 ** 5

    for i in range(1, n + 1):
        
        x = min_operations[i - 1] + 1
        
        y = inf
        if i % 2 == 0:
            y = min_operations[i // 2] + 1

        z = inf
        if i % 3 == 0:
            z = min_operations[i // 3] + 1

        min_operations.append(min(x, y, z))

    result = [n]
    num = n
    operations_count = min_operations[-1]

    for i in range(n - 1, -1, -1):

        if min_operations[i] == operations_count - 1 and (num / 3 == i or num / 2 == i or num - 1 == i):
            result.append(i)
            operations_count -= 1
            num = i

    return min_operations[-1], reversed(result[:-1])

n = int(input())
count, result = step_calculate(n)
print(count)
print(' '.join(map(str, result)))
