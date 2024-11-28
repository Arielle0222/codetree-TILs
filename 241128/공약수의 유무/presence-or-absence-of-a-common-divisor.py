arr = list(map(int, input().split()))
a = arr[0]
b = arr[1]

satisfied = False #공약수가 없다고 가정

for i in range(a,b+1):
    if(1920 % i == 0 and 2880 % i == 0):
        satisfied = True #공약수가 있음

if satisfied == True:
    print("1")
else :
    print("0")