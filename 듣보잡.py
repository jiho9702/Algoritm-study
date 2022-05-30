import sys
input = sys.stdin.readline

n, m = map(int, input().split())

hearable = []
visible = []
for _ in range(n):
    hearable.append(input())
for _ in range(m):
    visible.append(input())

answer = list(set(hearable) & set(visible))
print(len(answer))
answer.sort()
for human in answer:
    print(human)
