# 배열에 주어진 수를 입력받아 저장합니다.
arr = list(map(int, input().split()))
cnt = 0

# 배열에 0이 있는지 확인합니다.
for elem in arr:
	if elem == 0:
		break
	cnt += 1

# 0이 입력되기 전까지의 수를 반대 순서로 출력합니다.
for i in range(cnt - 1, -1, -1):
	print(arr[i], end=" ")