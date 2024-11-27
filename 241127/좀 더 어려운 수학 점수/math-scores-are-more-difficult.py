arr_a= list(map(int, input().split()))

a_m = arr_a[0]
a_e = arr_a[1]

arr_b= list(map(int, input().split()))

b_m = arr_b[0]
b_e = arr_b[1]


if (a_m > b_m) :
    prit("A")
elif ((a_m == b_m) and (a_e > b_e)) :
    print("A")
else :
    print("B")
