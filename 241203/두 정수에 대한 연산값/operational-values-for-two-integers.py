def big_plus_25(n):
    return n+25

def small_prod_2(n):
    return n*2


input_arr =list(map(int, input().split( )))
a = input_arr[0]
b = input_arr[1]

if (a>=b) :
    print(big_plus_25(a), end=" ")
else:
    print(small_prod_2(a), end=" ")

if (a<=b) :
    print(big_plus_25(b), end=" ")
else:
    print(small_prod_2(a), end=" ")