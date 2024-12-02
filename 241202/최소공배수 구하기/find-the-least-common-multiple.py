def gcd(n, m):
    while m != 0:  # 최대 공약수 구하기
        n, m = m, n % m
    return n

def lcm(a, b):
    print (a * b // gcd(a, b))  # 최소 공배수 계산

n,m = tuple(map(int, input().split( )))
lcm(n,m)