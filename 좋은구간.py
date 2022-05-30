from bisect import bisect

L = int(input())
num = list(map(int, input().split()))
num.sort()
N = int(input())

if N < num[0]:
    answer = max(0, (num[0]-N)*(N)-1)
else:
    index = bisect(num, N)
    print(num[index]-N)
    print(N-num[index-1])
    answer = max(0,(num[index]-N)*(N-num[index-1])-1)

print(answer)

