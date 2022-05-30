import sys
input = sys.stdin.readline

count = int(input())
for _ in range(count):
    VPS = input()
    stack = []
    for i in VPS:
        if i == '(':
            stack.append(i)
        elif i == ')':
            if len(stack) != 0 and stack[-1] == '(':
                stack.pop()
            else:
                stack.append(')')
                break
    if len(stack) == 0:
        print('YES')
    else:
        print('NO')