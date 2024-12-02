input_n, input_m = tuple(map(int, input().split( )))

def gcd(n,m):
    prod = 1
    while m != 0:  # b가 0이 아닐 동안 반복
        n, m = m, n % m  # a를 b로, b를 a % b로 갱신
    print(n)

gcd(input_n, input_m)