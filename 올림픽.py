n,k = map(int, input().split())

country = []

for i in range(n):
    country.append(list(map(int, input().split())))

country.sort(key = lambda x : (x[1], x[2], x[3]), reverse = True)

for i in range(n):
    if country[i][0] == k:
        index = i

for i in range(n):
    if country[index][1:] == country[i][1:]:
        print(i+1)
        break