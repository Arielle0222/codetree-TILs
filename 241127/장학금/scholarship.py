# 변수 선언, 입력
arr = list(map(int, input().split()))
m = int(arr[0])
f = int(arr[1])

# 출력
if (m >= 90 and f >= 95):
	print("100000")
elif (m >= 90 and f >= 90):
	print("50000")
else:
	print("0")