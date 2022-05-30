mod = 1000000009

num = [[0 for _ in range(4)] for _ in range(100001)]
num[1] = [0,1,0,0]
num[2] = [0,0,1,0]
num[3] = [0,1,1,1]

for i in range(4, 100001):
    num[i][1] = (num[i-1][2] + num[i-1][3]) 
    num[i][2] = (num[i-2][1] + num[i-2][3]) 
    num[i][3] = (num[i-3][1] + num[i-3][2]) 

    num[i][1] %= mod
    num[i][2] %= mod
    num[i][3] %= mod

cnt = int(input())

for _ in range(cnt):
    way_number = int(input())
    print(sum(num[way_number])%mod)