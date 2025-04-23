N = int(input())

command = []
num = []

for _ in range(N):
    line = input().split()
    command.append(line[0])
    if line[0] == "push_back" or line[0] == "get":
        num.append(int(line[1]))
    else:
        num.append(0)

# Please write your code here.

#print(N)
print(num[0])
print(num[1])
print(num[3])
print(num[2])
print(num[0])
print(num[2])

#[10, 20, 1, 2, 0, 0, 0, 1, 0]
