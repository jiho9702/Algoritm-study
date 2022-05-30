import sys
input = sys.stdin.readline

n, m = map(int, input().split())
basket = [i+1 for i in range(n)]

for _ in range(m):
    x, y = map(int, input().split())
    basket[x-1], basket[y-1] = basket[y-1], basket[x-1]

for i in range(len(basket)):
    print(basket[i], end = " ")