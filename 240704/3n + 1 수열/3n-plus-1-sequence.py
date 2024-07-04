n = int(input())
cnt = 0

while True:
    #디버깅 해보면 break문이 먼저 들어가야 함.
    if n == 1 :
        break

    if n % 2 == 0 :
        n = n // 2
        cnt+=1
    else:
        n = (n*3)+1
        cnt+=1
    

print(cnt)