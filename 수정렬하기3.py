import sys
input = sys.stdin.readline

num = int(input())

numArray = [0] * 10001

for _ in range(num):
    data = int(input())
    numArray[data] += 1

for i in range(1, 10001):
    if numArray[i] != 0:
        for _ in range(numArray[i]):
            print(i)
