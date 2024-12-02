"""
def add(*args):
    print(f"args: {args}")


>> add(1, 2)    # args: (1, 2)
>> add(1, 2, 3) # args: (1, 2, 3)


----------------------------------------------------
def add(*args):
    return sum(args)


>> add(1, 3, 2, 6, 5, 4)

21
"""



def print_min(a,b,c):
    #a 
    if (a<=b and a<=c) :
        return a
    elif (b<=a and b<=c) :
        return b
    else :
        return c
    
A,B,C = tuple(map(int, input().split()))
result = print_min(A,B,C)
print(result)