n = int(input())

satisfied = False #2 ~  n-1사이에 하나도 없다고 가정

for i in range(2, n):
    if (n%i==0) :
        satisfied = True

if satisfied == True :
    print("C")
else :
    print("N")