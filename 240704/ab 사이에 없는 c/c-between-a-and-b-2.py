arr = input().split()
a,b,c = int(arr[0]), int(arr[1]), int(arr[2])

satisfied = True #배수가 있다!!.
for i in range (a,b+1):
    if i % c == 0 :
        satisfied = False # 배수가 없다.

if satisfied == False :
    print("NO")
else:
    print("YES")