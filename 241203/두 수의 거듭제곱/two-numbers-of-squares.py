def find_z(a,b):
    prod=a
    for i in range(1,b):
        prod*=a
    return prod

a,b = tuple(map(int, input().split()))
print(int(find_z(a,b)))