def isEven(c):
    num = int(c)
    return num % 2 == 0

def DashInsert(data):
    s = []
    old = isEven(data[0])
    s.append(data[0])
    for i in range(1, len(data)):
        new = isEven(data[i])
        if old == True and new == True:
            s.append("*")
        elif old == False and new ==False:
            s.append("-")
        s.append(data[i])
        old = new
    return ("".join(s))

data = '4546793'
print(DashInsert(data))