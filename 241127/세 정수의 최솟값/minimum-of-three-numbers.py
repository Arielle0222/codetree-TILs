arr_1 = list(map(int, input().split()))

a = arr_1[0]
b = arr_1[1]
c = arr_1[2]

if (a<=b and a<=c) :
    print(a)
elif (b<=a and b<=c) :
    print(b)
else :
    print(c)