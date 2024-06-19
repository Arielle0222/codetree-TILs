arr = list(map(int, input().split()))


# 0이 저장되어있는 인덱스를 찾습니다.
for i in range(100):
	if arr[i] == 0:
		k = i
		break
		
# 출력
print(arr[k - 3] + arr[k - 2] + arr[k - 1])