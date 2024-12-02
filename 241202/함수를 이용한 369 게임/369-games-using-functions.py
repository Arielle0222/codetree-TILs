"""
def all_different(n):
    return (n // 10) != (n % 10)

def is_magic_number(n):
    return% 3  n != 0 and all_different(n)



cnt = 0
for i in range(10, 100):
    if is_magic_number(i):
        cnt += 1

print(cnt)

1. 10부터 99 사이의 숫자 i를 일일이 잡아본다.
2. 숫자 i가 문제 조건에 맞는 숫자인지 보고, 그렇다면 개수를 1 증가시킨다.
    1. 3의 배수가 아니면서
    2. 각 자리에 있는 숫자가 다른 경우에만 magic_number이다.
3. 답을 출력한다.
"""
'''
1. a이상b이하 숫자의 범위로 i를 돌려보기
2. 숫자 i가 문제 조건에 맞는 숫자이면 cnt+=1
    1. 숫자 자체에 3 6 9 중 하나가 들어가 있음 in_one_number
        ->    3 6 9 
              13 16 19 
              23 26 29 
           30 33 36 39
           60 63 66 69
           90 93 96 99 
    2. 그 숫자 자체가 % 3 ==0
'''

def find_369(n):
    return n%3==0 or in_one_number(n)

def in_one_number(n):
    return n%10 in {3, 6, 9} or ten_number_369(n)

def ten_number_369(n):
    return n // 10 in {3, 6, 9}

a,b = tuple(map(int, input().split( )))
cnt = 0

for i in range(a, b+1) :
    if find_369(i):
        #print(i)
        cnt +=1
print(cnt)

