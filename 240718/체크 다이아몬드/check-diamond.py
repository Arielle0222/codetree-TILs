n = int(input())
'''
for i in range(n):
    for j in range(n-1-i):
        print(" ", end= " ")
    for j in range(i+1):
        print("*", end=" ")
    print()
    
for i in range(n-2, -1, -1):
    for j in range(n-1-i):
        print(" ", end= " ")
    for j in range(i+1):
        print("*", end=" ")
    print()
'''

for i in range(n):
    for j in range(n-1-i):
        print(" ", end="") #공백은 띄어쓰기가 아님
    for j in range(i+1):
        print("*", end=" ") # *만 공백 띄어쓰기로 진행
    print()

# Lower part of the diamond
for i in range(n-2, -1, -1):
    for j in range(n-1-i):
        print(" ", end="")
    for j in range(i+1):
        print("*", end=" ")
    print()