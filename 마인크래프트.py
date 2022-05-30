import sys
read = sys.stdin.readline

n, m, b = map(int, read().split())
ground = [list(map(int, read().split())) for _ in range(n)]


for i in range(257):
    max = 0
    min = 0
    for j in range(n):
        for k in range(m):
            if ground[j][k] < i:
                min += (i - ground[j][k])
            else:
                max += (ground[j][k] - i)


                