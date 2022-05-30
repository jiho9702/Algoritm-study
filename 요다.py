N = int(input())

for _ in range(N):
    sentence = list(input().split())
    sentence = sentence[2:] + sentence[:2]
    sentence = " ".join(sentence)
    print(sentence)

    # for i in range(2, len(sentence)):
    #     print(sentence[i], end = ' ')
    
    # print(sentence[0], sentence[1])
        