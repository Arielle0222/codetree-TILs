def repeat(n,m) :
    for i in range(n):
        print("1"*m)

n,m = tuple(map(int, input().split( )))
repeat(n,m)