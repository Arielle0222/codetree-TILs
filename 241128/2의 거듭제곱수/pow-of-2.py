# x가 몇번으로 늘어나야 N과 값이 같아지는지 찾으면 됨

n = int(input())
x=0
prod =1

while True :
    if (prod == n) :
        break
     
    prod = prod * 2
    x+=1

print(x)