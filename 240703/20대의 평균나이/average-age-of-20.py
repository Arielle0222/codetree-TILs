# 변수 선언
sum_val = 0
cnt = 0

# 언제 끝날지 모르므로
# 계속 반복합니다.
while True:
    # 변수를 선언하고 입력을 받습니다.
    n = int(input())

    # 입력받은 값이 20대가 아니면 종료합니다.
    if n >= 30 or n <= 19:
        print(f"{sum_val/cnt:.2f}")
        break
    
    # 20대가 맞는 경우에는, 계속 값을 계산해줍니다.
    sum_val += n
    cnt += 1