class stack:
    def __init__(self):
        self.items = []
    def push(self, item):
        self.items.append(item)
    def pop(self):
        return self.items.pop()
    def isEmpty(self):
        return not self.items

case_cnt = int(input())
for i in range(1, case_cnt+1):
    case_str = stack()
    case_list = list(map(str, input().split()))
    print("Case #%d: " %i, end = " ")

    for j in range(len(case_list)):
        case_str.push(case_list[j])
        
    while not case_str.isEmpty() :
        print(case_str.pop(), end = " ")
    print()