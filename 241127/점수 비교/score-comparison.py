arr_1 = list(map(int, input().split()))
a_e = arr_1[0]
a_m = arr_1[1]
arr_2 = list(map(int, input().split()))
b_e = arr_2[0]
b_m = arr_2[1]


if (a_m > b_m and a_e > b_e) :
    print("1")
else :
    print("0")