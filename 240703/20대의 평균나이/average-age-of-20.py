cnt = 0
sum_age = 0

while True:
    n = int(input())
    
    # 입력받은 나이가 20대인 경우 (20 <= n < 30)
    if 20 <= n < 30:
        cnt += 1
        sum_age += n
    else:
        print(f"{sum_age / cnt:.2f}")
        break