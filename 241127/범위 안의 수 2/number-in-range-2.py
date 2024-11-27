cnt=0
sum_val=0

for i in range(10):
    n = int(input())

    if (n>=0 and n<=200) :
        cnt+=1
        sum_val+=n

print(f"{sum_val} {sum_val/cnt:.1f}")
