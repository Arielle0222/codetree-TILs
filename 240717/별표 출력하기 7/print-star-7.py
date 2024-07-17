'''
n = int(input())

for i in range(n):
    for j in range(i+1):
        print('*', end=" ")

print()
'''


n = int(input())
for i in range(n):         #-> i는 0부터 3까지 돌면 됩니다.
    for j in range(i + 1): #-> j는 0부터 i 까지 돌면 됩니다.
        print("*", end=" ")
    print()