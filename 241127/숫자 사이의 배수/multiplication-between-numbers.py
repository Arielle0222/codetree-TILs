arr = list (map(int, input().split()))

a = arr[0]
b = arr[1]

sum_val = 0
cnt = 0

for i in range(a,b+1) :
    if (i%5==0 or i%7==0) :
        cnt+=1
        sum_val+=i

print(f"{sum_val} {sum_val/cnt:.1f}")