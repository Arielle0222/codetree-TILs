'''
하나라도 만족하는 경우를 찾을 때는 초기가 False -> True
모두 만족(혹은 모두 불만족)하는 경우에는 초기를 True -> 나중에 하나라도 틀린게 나오면 그때 False
'''

arr = list(map(int, input().split()))
a = arr[0]
b = arr[1]
c = arr[2]

satisfied = True # 배수 전혀 없음 -> 나중에 하나라도 있으면 그 때 False로 바꿔 주기

for i in range(a,b+1) :
    if (i%c==0) :
        satisfied = False


if satisfied == True :
    print("YES")
else :
    print("NO")