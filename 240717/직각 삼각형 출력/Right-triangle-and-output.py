'''
n = int(input())

for i in range(n):
    for j in range(2*i +1):
        print('*', end="")
    print()
'''


n = int(input())

for i in range(1, n+1):
    print('*' * (2*i - 1)) # *찍히는 규칙 수열 공식임