n = int(input())

satisfied = True #응 소수야! 약수가 1이랑 나 자신밖에 없어 -> 나중에 아니면 False

for i in range(2, n):
    if (n%i==0) :
        satisfied = False #응 나 소수 아니야

if satisfied == True :
    print("P")
else :
    print("C")

