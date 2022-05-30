import sys
input = sys.stdin.readline

gan = ["6", "7", "8", "9", "0", "1", "2", "3", "4", "5"]
zi = ["I", "J", "K", "L", "A", "B", "C", "D", "E", "F", "G", "H"]

input_year = int(input())

print(zi[input_year % 12]+gan[input_year % 10])


