arr = list (map(int, input().split()))

a = arr[0]
b = arr[1]

prod = 1

for i in range(b):
    prod*=a

print(prod)