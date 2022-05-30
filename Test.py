n = int(input())
li = []
for _ in range(n):
    li.append(int(input()))

li.sort()

number = list(set(li))
print(number)
max_fre = []
max_cnt = 0
for i in number:
    print(i, li.count(i))
    #print(max_cnt)
    if max_cnt == li.count(i):
        max_fre.append(i)
    elif max_cnt < li.count(i):
        max_fre = []
        max_fre.append(i)
        #print(max_fre)
        max_cnt = li.count(i)
if len(max_fre) > 1: # 최빈값이 2개이상
    max_fre.sort()
    print(max_fre[1])
else: # 최빈값 1개
    print(max_fre[0])