n = int(input())
arr = list(map(int, input().split()))

new_arr = []

for elem in arr:
    new_arr.append(elem*elem)

for i in range(n):
    print(new_arr[i], end=" ")