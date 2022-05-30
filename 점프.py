import sys
input = sys.stdin.readline

n = int(input())
maps = [list(map(int, input().split())) for _ in range(n)]

goWay = [[0 for _ in range(n)] for _ in range(n)]

goWay[0][0] = 1

for y in range(n):
    for x in range(n):
        if goWay[y][x] != 0 and maps[y][x] != 0:
            if y + maps[y][x] < n:
                goWay[y + maps[y][x]][x] += goWay[y][x]
            if x + maps[y][x] < n:
                goWay[y][x + maps[y][x]] += goWay[y][x]

print(goWay[n-1][n-1])