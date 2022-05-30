number = input()
room_number = [0] * 10

for i in range(len(number)):
    num = int(number[i])
    if num == 6 or num == 9:
        if room_number[6] <= room_number[9]:
            room_number[6] += 1
        else:
            room_number[9] += 1
    else:
        room_number[num] += 1

print(max(room_number))

