A = int(input())
B = int(input())
H = int(input())
if (A <= H <= B):
    print("Это нормально")
elif (H <= A):
    print("Недосып")
else:
    print("Пересып")
