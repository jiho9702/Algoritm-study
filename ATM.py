import sys
input = sys.stdin.readline

atmUser = int(input())

atmTime = list(map(int, input().split()))

num = 0
atmTime.sort()

for i in range(atmUser):
    for j in range(i + 1):
        num += atmTime[j]

print(num)