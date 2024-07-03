#**print함수를 외부에 빼버리기 이게 더 가독성 있는 듯 **
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
