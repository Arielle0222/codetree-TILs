n = int(input())

sum_val = 0

i=1

while (i<n) :
    if (n%i==0):
        sum_val+=i
    i+=1

if sum_val == n :
    print("P")
else :
    print("N")