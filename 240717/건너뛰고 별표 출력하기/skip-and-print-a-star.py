n = int(input())

for i in range(n):
    for j in range(i+1):
        print("*", end="")
    print() #3행 까지

print()

for i in range(n-2, -1, -1):
    for j in range(i+1):
       print("*", end="")
    print() #3행 까지