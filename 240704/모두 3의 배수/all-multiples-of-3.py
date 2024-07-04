satisfied = True #모든 수가 3의 배수야!

for _ in range(5):
    n = int(input())
    
    #for _ in range(1, n+1): #구지 반복문을 1 ~ n까지 무의미하게 돌려줄 필요는 없음
    if n % 3 != 0 : #오! 3의 배수가 아닌 것도 있네
        satisfied = False

if satisfied == True:
    print("1")
else:
    print("0")