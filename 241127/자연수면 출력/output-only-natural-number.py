arr = list(map(int, input().split()))

a = arr[0]
b = arr[1]

if (a>0) :
    for i in range(b):
        print(a, end="")
elif (a<0) :
    print(0)