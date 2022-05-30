from collections import deque as dq
import sys
input = sys.stdin.readline

n, m = map(int, input().split())
origin = dq(range(1, n+1))
find_num = list(map(int, input().split()))
count = 0

for i in find_num:
    while True:
        if origin[0] == i:
            origin.popleft()
            break
        else:
            if origin.index(i) < len(origin)/2:
                while origin[0] != i:
                    origin.append(origin.popleft())
                    count += 1
            else:
                while origin[0] != i:
                    origin.appendleft(origin.pop())
                    count += 1
print(count)

