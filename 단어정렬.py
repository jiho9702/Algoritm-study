import sys
input = sys.stdin.readline

N = int(input())
wordList = []

for _ in range(N):
    wordList.append(input().strip())

wordList = list(set(wordList))

setWordList = []
for i in wordList:
    setWordList.append((len(i), i))

setWordList.sort()
for result in setWordList:
    print(result[1])



