"""1. prime and even 함수 구현
    1. prime : 
    2. even :
2. for문 돌려서 cnt 개수 카운팅
"""


def counting(n):
    return prime(n) and even(n) 

def prime(n) :
    if n == 1 :
        return False
    for i in range(2, n):
        if(n%i==0) :
            return False #소수 아님
    return True 
        
        #제곱근으로 진행    
    """for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False"""


def even(n) :
    digit_sum = sum(map(int, str(n)))  # 모든 자릿수의 합 계산
    return digit_sum % 2 == 0  # 자릿수 합이 짝수인지 판정


a,b = list(map(int, input().split( )))
cnt=0
for i in range(a,b+1) :
    if counting(i) :
        cnt+=1
    
print(cnt)
