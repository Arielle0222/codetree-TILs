arr= list(map(int, input().split()))

a = arr[0]
b = arr[1]
c = arr[2]

if (a<=b and a<=c) :
    print("1", end=" ")
else :
    print("0", end=" ")


if (a==b==c) :
    print("1")
else :
    print("0")

