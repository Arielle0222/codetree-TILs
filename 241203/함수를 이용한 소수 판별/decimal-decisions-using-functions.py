def is_prime(n):
    #sum_val=0
    if n == 1 :
        return False #소수가 아님

    for i in range(2,n) :
        if n%i==0 :
            return False #소수 아님

    return True #소수임


a,b = tuple(map(int, input().split( )))
sum_val = 0


for i in range(a,b+1):
    if is_prime(i) :
        sum_val+=i

print(sum_val)

'''
1. 함수에서는 소수 구별만 하고
2. True -> for문 돌려서 sum_val 구하기 
'''