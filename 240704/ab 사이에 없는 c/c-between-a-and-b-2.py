arr = input().split()
a,b,c = int(arr[0]), int(arr[1]), int(arr[2])

satisfied = True #응 다 없어.. 
for i in range (a,b+1):
    if i % c == 0 :
        satisfied = False # 하나는 있다 얘

if satisfied == False :
    print("NO") #그래 있다고
else:
    print("YES") # 없당께