n = int(input())

for i in range(1, n+1) :
    #온전수를 구하는 문제임. continue전에 온전수가 아닌 경우의 조건을 적으면 됨
    if(i%2==0 or i%10==5 or (i%3==0 and i%9!=0)) : #이 조건은 온전수가 아닌 경우
        continue 
    else :
        print(i, end=" ") #여기는 온전수인 경우