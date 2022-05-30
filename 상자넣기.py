import sys
read = sys.stdin.readline

n = int(read())
box = list(map(int, read().split()))

dynamic = [1] * n

for i in range(n):
    for j in range(i):
        if box[i] > box[j]:
            dynamic[i] = max(dynamic[i], dynamic[j]+1)

print(max(dynamic))

 