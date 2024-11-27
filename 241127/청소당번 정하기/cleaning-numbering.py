"""
12 t
3 h
2 c
"""
cnt_c = 0
cnt_h = 0
cnt_t = 0

n = int(input())

for i in range(1, n+1) :
    if (i%12 == 0):
        cnt_t+=1
    elif(i%3 == 0):
        cnt_h+=1
    elif(i%2==0) :
        cnt_c+=1

print(f"{cnt_c} {cnt_h} {cnt_t}")