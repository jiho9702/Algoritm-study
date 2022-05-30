import sys
input = sys.stdin.readline

class dq:
    def __init__(self):
        self.items = []
    def push_front(self, item):
        self.items.insert(0, item)
    def push_back(self, item):
        self.items.append(item)
    def pop_front(self):
        if len(self.items) == 0:
            return -1
        else:
            return self.items.pop(0)     
    def pop_back(self):
        if len(self.items) == 0:
            return -1
        else:
            return self.items.pop()
    def size(self):
        return len(self.items)
    def empty(self):
        if not self.items:
            return 1
        else:
            return 0
    def front(self):
        if not self.items:
            return -1
        else:
            return self.items[0]
    def back(self):
        if not self.items:
            return -1
        else:
            return self.items[-1]

dque = dq()
num = int(input())
for _ in range(num):
    command = input().split()
    if command[0] == 'push_front':
        dque.push_front(int(command[1]))
    elif command[0] == 'push_back':
        dque.push_back(int(command[1]))    
    elif command[0] == 'pop_front':
        print(dque.pop_front())
    elif command[0] == 'pop_back':
        print(dque.pop_back())
    elif command[0] == 'size':
        print(dque.size())
    elif command[0] == 'empty':
        print(dque.empty())
    elif command[0] == 'front':
        print(dque.front())
    elif command[0] == 'back':
        print(dque.back())