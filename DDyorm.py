N, M = map(int,input().split(' '))

origin_words = []
change_words = []

for i in range(N):
    word = input()
    origin_words.append(word)

for i in range(N):
    word = input()
    change_words.append(word)

check = True

for i in range(N):
    twice_words = ''
    for word in origin_words[i]:
        twice_words += word * 2

    if twice_words != change_words[i]:
        check = False
        break

if check:
    print("Eyfa")
else:
    print("Not Eyfa")
