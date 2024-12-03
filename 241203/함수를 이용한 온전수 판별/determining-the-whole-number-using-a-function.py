def is_gnumber(n):
    if (n%2==0) :
        return False #온전수 아님
    elif (n%10==5) :
        return False 
    elif (n%3==0 and n%9!=0) :
        return False
    else :
        return True

a,b = tuple(map(int, input().split( )))
cnt=0

for i in range(a,b+1):
    if  is_gnumber(i):
        cnt+=1

print(cnt)
    