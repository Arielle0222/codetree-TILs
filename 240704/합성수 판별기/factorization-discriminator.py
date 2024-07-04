n = int(input())

satisfied = False

for i in range(2,n):
    if n % i == 0 :
        satisfied = True

if satisfied == True :
    print('C')
else:
    print('N')