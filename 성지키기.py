n, m = map(int, input().split())

castle = []

for _ in range(n):
    castle.append(input())

row_cnt = 0
col_cnt = 0
for i in range(n):
    if 'X' not in castle[i]:
        row_cnt += 1

for j in range(m):
    if 'X' not in [castle[i][j] for i in range(n)]:
        col_cnt += 1

print(max(row_cnt, col_cnt))