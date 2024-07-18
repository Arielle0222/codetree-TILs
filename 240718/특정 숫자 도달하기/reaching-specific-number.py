# 배열을 구현하여 주어진 수를 입력받습니다.
arr = list(map(int, input().split()))

sum_val = 0
cnt = 0

# 10개의 정수 중 250 이상의 수가 나올 때 까지의 수의 합계와 개수를 구합니다.
for e in arr:
	if e >= 250:
		break
	sum_val = sum_val + e
	cnt += 1

# 평균을 구합니다.
avg = sum_val / cnt
 
# 출력
print(f"{sum_val} {avg:.1f}")

'''
--.pop : 마지막 원소 삭제
--.append : 하나씩 넣기
'''