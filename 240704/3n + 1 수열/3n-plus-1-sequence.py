n = int(input())
cnt = 0

while True:
    
    if n % 2 == 0 :
        n = n // 2
        cnt+=1
    else:
        n = (n*3)+1
        cnt+=1
    if n == 1 :
        cnt+=1
        break

print(cnt)