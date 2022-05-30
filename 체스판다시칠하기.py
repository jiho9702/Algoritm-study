n, m = map(int, input().split())

result = []
chess = []
for _ in range(n):
    chess.append(input())

for i in range(0, n-7):
    for j in range(0, m-7):
        count1 = 0
        count2 = 0
        for x in range(i, i+8):
            for y in range(j, j+8):
                if (x+y) % 2 == 0:
                    if chess[x][y] != 'W':
                        count1 += 1
                    if chess[x][y] != 'B':
                        count2 += 1
                else:
                    if chess[x][y] != 'W':
                        count2 += 1
                    if chess[x][y] != 'B':
                        count1 += 1
        result.append(count1)
        result.append(count2)
print(min(result))