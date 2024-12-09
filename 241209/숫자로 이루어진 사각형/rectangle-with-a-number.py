n = int(input())

def repeat():
    cnt = 1  # Start counting from 1
    for i in range(n):
        for j in range(4):  # Print 4 numbers per row
            print(cnt, end=" ")
            cnt += 1
            if cnt > 9:  # Cycle back to 1 after reaching 9
                cnt = 1
        print()  # Move to the next line after printing 4 numbers

repeat()

