import sys
input = sys.stdin.readline

class stack:
    def __init__(self):
        self.items = []
    def push(self, item):
        self.items.append(item)
    def pop(self):
        if len(self.items) == 0:
            return -1
        else:
            return self.items.pop()
    def size(self):
        return len(self.items)
    def empty(self):
        if self.items:
            return 0
        else:
            return 1
    def top(self):
        if self.items:
            return self.items[-1] 
        else: 
            return -1

case_count = int(input())
stk = stack()
for _ in range(case_count):
    command = input().split()
    if command[0] == 'push':
        stk.push(command[1])
    elif command[0] == 'pop':
        print(stk.pop())
    elif command[0] == 'size':
        print(stk.size())
    elif command[0] == 'empty':
        print(stk.empty())
    elif command[0] == 'top':
        print(stk.top())