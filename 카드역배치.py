import sys
input = sys.stdin.readline

cards = []
for i in range(1, 21):
    cards.append(i)

for _ in range(10):
    x, y = map(int, input().split())

    tmp = cards[x-1:y]
    tmp = reversed(tmp)
    cards[x-1:y] = tmp
    
for i in range(len(cards)):
    print(cards[i], end = " ")
