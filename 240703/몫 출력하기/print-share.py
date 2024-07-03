#n = int(input()) 여기에 인풋이 들어가면 while문으로 입력값이 안들어감
cnt = 0

while True :
    n = int(input())

    if n % 2 == 1 :
        continue
    
    print(n // 2)
    cnt+=1

    if cnt >=3 :
        break