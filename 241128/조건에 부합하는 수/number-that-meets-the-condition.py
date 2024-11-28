a = int(input())

#세 조건을 만족하면 계속 for루프에 들어가 있고 만족하지 않으면 for루프 탈출해서 해당 수 출력

for i in range(1, a+1):
    if ((i%2==0 and i%4!=0) or (i//8%2==0) or (i%7<4)) : #조건과 반대로 입력....
        continue
    else :
        print(i, end=" ")
