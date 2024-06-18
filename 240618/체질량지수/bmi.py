arr = input().split()

h,w = int(arr[0]), int(arr[1])

b = (10000*w) // (h*h)

print(b) #소숫점 첫째 자리에서 버림
if b>=25 :
    print("Obesity")