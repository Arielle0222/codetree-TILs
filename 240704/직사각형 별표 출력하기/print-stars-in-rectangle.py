arr = input().split()
n,m = int(arr[0]), int(arr[1])

for i in range(n):
    for j in range(m):
        print('*', end=" ")
    print()