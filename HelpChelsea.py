n = int(input())

for _ in range(n):
    p = int(input())
    max = 0
    maxName = ""
    for _ in range(p):
        value, name = input().split(' ')
        value = int(value)
        if value > max:
            max = value
            maxName = name
    print(maxName)