def C_n_k(n, k):
    if k > n:
        return 0
    elif k == 0:
        return 1
    else:
        return C_n_k(n - 1, k) + C_n_k(n - 1, k - 1)
n, k = map(int, input().split())
x = C_n_k(n, k)
print(x)
