arr_1 = list(input().split())
a_s = arr_1[0]
a_t = int(arr_1[1])

arr_2 = list(input().split())
b_s = arr_2[0]
b_t = int(arr_2[1])

arr_3 = list(input().split())
c_s = arr_3[0]
c_t = int(arr_3[1])

cnt = 0

if (a_s == 'Y' and a_t >=37) :
    cnt +=1
if (b_s == 'Y' and b_t >=37) :
    cnt+=1
if (c_s == 'Y' and c_t >=37) :
    cnt+=1

if cnt >=2 :
    print("E")
else :
    print("N")



