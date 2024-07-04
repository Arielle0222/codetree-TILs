'''
x라는 거는 2를 몇번을 곱했느냐 즉 cnt(여기서는 x)의 개념임!!
그러니까 2를 계속 무한으로 곱해서 그 값이 N이 되면 거듭제곱이 되는 개념임!
'''

n = int(input())
x = 0
prod = 1 #거듭제곱의 처음 시작

while True:
    if n == prod :
        break
    
    else:
        x+=1
        prod = prod*2

print(x)