cnt = 0
sum_age = 0

while True:
    n = int(input())
    if (n % 20) <=9 :
        cnt+=1
        sum_age+=n

    elif n >=30 :
        print(f"{sum_age/cnt:.2f}")
        break