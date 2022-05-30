case = int(input())

for _ in range(case):
    count = 0
    n,m = map(int, input().split())
    for i in range(n, m+1):
        word = str(i)
        count += word.count('0')
    print(count)
