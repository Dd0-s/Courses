def fib_mod(n, m):
    b = [0,1]
    p = 0
    if m == 1:
        p = 1
    else:
        while True:
            p += 1
            b.append((b[-1] + b[-2]) % m)
            if b[-2] == 0 and b[-1] == 1:
                break
    return b[n % p]


def main():
    n, m = map(int, input().split())
    print(fib_mod(n, m))


if __name__ == "__main__":
    main()
