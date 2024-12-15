def gcd(n,m):
    prod = 1
    while m!=0:
        n,m = m, n%m
    print(n)

n,m = tuple(map(int, input().split()))
gcd(n,m)