n = int(input())

def repeat():
    cnt = 1  # Start counting from 1
    for i in range(n):  # Repeat `n` times
        print(cnt, end=" ")
        cnt += 1
        if cnt > 9:  # Cycle back to 1 after reaching 9
            cnt = 1
        if (i + 1) % 9 == 0:  # Print a new line after every 9 numbers
            print()

repeat(