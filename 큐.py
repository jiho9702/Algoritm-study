import sys
input = sys.stdin.readline

class Q:
    def __init__(self):
        self.items = []
    def push(self, item):
        self.items.append(item)
    def pop(self):
        if self.items:
            return self.items.pop(0)
        elif not self.items:
            return -1
    def size(self):
        return len(self.items)
    def empty(self):
        if not self.items:
            return 1
        elif self.items:
            return 0
    def front(self):
        if self.items:
            return self.items[0]
        elif not self.items:
            return -1
    def back(self):
        if self.items:
            return self.items[len(self.items) - 1]
        elif not self.items:
            return -1

que = Q()
cnt = int(input())
for _ in range(cnt):
    command = input().split()
    if command[0] == 'push':
        que.push(command[1])
    elif command[0] == 'pop':
        print(que.pop())
    elif command[0] == 'size':
        print(que.size())
    elif command[0] == 'empty':
        print(que.empty())
    elif command[0] == 'front':
        print(que.front())
    elif command[0] == 'back':
        print(que.back())