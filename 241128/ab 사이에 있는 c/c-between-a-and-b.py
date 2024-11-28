
arr = list(map(int, input().split()))

a = arr[0]
b = arr[1]
c = arr[2]

satisfied = False # 없다라고 가정 뒤에서 하나라도 있으면 그 때 satisfied == True (YES)로 바꾸기

for i in range(a,b+1) :
    
    if (i%c==0) :
        satisfied = True
    

if satisfied == True :
    print("YES")
else :
    print("NO")
