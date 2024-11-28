n = int(input())

sum_val = 0

for i in range(1, 101):
    sum_val+=i
    
    if (sum_val>=n) :
        print(i) # 값이 넘어가느 그때의 숫자를 출력하는 거임
        break