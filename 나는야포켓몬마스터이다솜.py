import sys
input = sys.stdin.readline

n, m = map(int, input().split())
pokemon = {}
for i in range(1,n+1):
    poke = input().rstrip()
    pokemon[i] = poke
    pokemon[poke] = i

for i in range(m):
    quest = input().rstrip()
    if quest.isdigit():
        print(pokemon[int(quest)])
    else:
        print(pokemon[quest])
