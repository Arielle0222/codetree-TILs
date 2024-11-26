arr = list(map(int, input().split()))

a = arr[0]
b = arr[1]

maxnum = a if a > b else b # a>b이면 a, 아니면 b

# 출력
print(maxnum)