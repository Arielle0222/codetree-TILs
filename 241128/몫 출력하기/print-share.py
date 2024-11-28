#홀수면 출력하지도 않음

cnt = 0

while True: 
    n = int(input())

    if (n%2==1):
        continue
    elif (n%2==0):
        n = n//2
        cnt+=1
        print(n)
    
    if (cnt == 3) :
        break