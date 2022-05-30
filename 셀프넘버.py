int_num = set(range(1, 10001))
self_num = set()

for i in range(1, 10001):
    for j in str(i):
        i += int(j)
    self_num.add(i)

self_num = sorted(int_num - self_num)
for i in self_num:
    print(i)