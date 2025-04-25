from collections import deque



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


#['push_back', 'push_back', 'get', 'get', 'size', 'pop_back', 'size', 'get', 'size']
#[10, 20, 1, 2, 0, 0, 0, 1, 0]


dq = deque()

"""
for i in range(N):
    if command[i] == "push_back":
        dq.append(num[i])
    elif command[i] == 'get':
        dq.append(num[i]-1)
    elif command [i] == 'size':
        print(len(dq))
    elif  command[i] == 'pop_back' :
        if dq:
            dq.pop()
"""

for i in range(N):
    if command[i] == "push_back":
        dq.append(num[i])
    elif command[i] == "pop_back":
        if dq:
            dq.pop()
    elif command[i] == "size":
        print(len(dq))
    elif command[i] == "get":
        print(dq[num[i] - 1])
