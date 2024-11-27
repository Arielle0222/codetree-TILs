arr = list (map(int, input().split()))

a = arr[0]
b = arr[1]

sum_val = 0

#a<b
if (a<=b) :
    for i in range(a,b+1):
        if (i%5==0) :
            sum_val+=i 
elif (a>b) :
    for i in range(b,a+1) :
        if (i%5==0) :
            sum_val+=i

print(sum_val)