n, m = map(int, input().split())
team, member = {}, {}
for i in range(n):
    team_name, member_cnt = input(), int(input())
    team[team_name] = []
    for j in range(member_cnt):
        member_name = input()
        team[team_name].append(member_name)
        member[member_name] = team_name

for _ in range(m):
    a, b = input(), int(input())
    if b:
        print(member[a])
    else:
        answer = sorted(team[a])
        print('\n'.join(answer))