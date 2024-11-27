arr = list(map(int, input().split()))
a = arr[0]
b = arr[1]

for i in range(b, a-1, -1):
    print(i, end=" ")