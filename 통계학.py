import sys
from collections import Counter

def average(N, n):
    return round(sum(N)/n)

def center(N, n):
    N.sort()
    return N[n//2]

def frequency(N):
    N.sort()
    cnt_li = Counter(N).most_common()
    if len(cnt_li) > 1 and cnt_li[0][1]==cnt_li[1][1]:
        return(cnt_li[1][0])
    else:
        return(cnt_li[0][0])

def arrange(N):
    N.sort()
    return (max(N) - min(N))


n = int(sys.stdin.readline())
li = []
for _ in range(n):
    li.append(int(sys.stdin.readline()))

print(average(li, n))
print(center(li, n))
print(frequency(li))
print(arrange(li))