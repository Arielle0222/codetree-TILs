satisfied = True # 응 모든 수가 3의 배수야

for i in range(5) :
    n = int(input())
    
    if (n%3!=0) : #3의 배수가 아닌 입력값이 하나라도 들어오면 -> satisfied = False
        satisfied = False
    
if satisfied == True :
    print("1")
else:
    print("0")
    