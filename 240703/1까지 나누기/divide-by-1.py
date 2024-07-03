# 변수 선언 및 입력
n = int(input())
cnt = 0

# 1부터 증가시키며 나눈 값이 1이하가 된 순간, 나눗셈을 진행한 횟수를 출력합니다.
for i in range(1, 101):
    if n <= 1:
        break
    n //= i
    cnt += 1

print(cnt)