arr = list (map(int, input().split()))

a = arr[0]
b = arr[1]

prod = 1

for i in range(1, b+1):
    if(i%a==0) :
        prod*=i 

print(prod)