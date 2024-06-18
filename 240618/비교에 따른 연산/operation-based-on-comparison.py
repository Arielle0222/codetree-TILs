arr = input().split()

a,b= int(arr[0]), int(arr[1])

if a>b:
    print(a*b)
else:
    print(b//a)