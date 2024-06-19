arr = list(map(int, input().split()))

n = len(arr)

sum_val = 0
for i in range(1, n, 2):
    sum_val += arr[i]
print(sum_val, end =" ")

sum_three = 0
for i in range(2, n, 3):
    sum_three +=arr[i]

sum_three_avg = sum_three/3

print(f"{sum_three_avg:.1f}")