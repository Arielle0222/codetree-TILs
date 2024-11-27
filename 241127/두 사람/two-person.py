arr_a = list(input().split())
a_a = int(arr_a[0])
a_g = arr_a[1]
arr_b = list(input().split())
b_a = int(arr_b[0])
b_g = arr_b[1]

if ((a_a >=19 or b_a >=19) and (a_g == "M" or b_g == "M")):
    print("1")
else :
    print("0")


