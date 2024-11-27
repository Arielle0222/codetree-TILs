arr = list(map(int, input().split()))

a = arr[0]
b = arr[1]

if (a>0) :
    for i in range(b): #b번 반복함
        print(a, end="")

else:
    print(0)