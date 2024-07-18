n = int(input())
arr = list(map(float, input().split()))

sum_val = 0
for in range(n):
	sum_val += arr[i]
avg = sum_val / n

print(f"{avg:.1f}")

if avg >=4.0 :
	print("Perfect")
elif avg >= 3.0 :
	print("Good")
else:
	print("Poor")