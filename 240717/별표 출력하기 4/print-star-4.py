n = int(input())

for i in range(n):
    for j in range(n-i):
        print("*", end=" ")
    print() #3행 까지

for i in range(n-2, -1, -1):
    for j in range(n-i):
       print("*", end=" ")
    print() #3행 까지