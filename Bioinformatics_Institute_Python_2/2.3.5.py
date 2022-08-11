def is_prime(num):
    if num == 2:
        return True
    for i in range(2, num // 2 + 1):
        if num % i == 0:
            return False
    return True

def primes():
    num = 2
    while True:
        if is_prime(num):
            yield num
        num += 1
