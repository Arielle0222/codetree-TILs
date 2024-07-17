'''
n = int(input())

for i in range(n):
    for j in range(i+1):
        print('*'* (2i-1))
    print()
'''

n = int(input())

for i in range(1, n+1):
    print('*' * (2*i - 1))