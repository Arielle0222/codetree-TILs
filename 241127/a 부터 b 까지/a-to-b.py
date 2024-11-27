arr = list(map(int, input().split()))

a = arr[0]
b = arr[1]

i = a

while (i<=b) :
    print(i, end=" ") #while은 뭐다? 먼저 결과 값을 앞으로 뺀다!!

    if (i%2==1) :
        i*=2
    elif (i%2==0) :
        i+=3
 