'''
1. 사칙연산 '+', '-', '/', '*'d에 해당되지 않으면 -> false
2. 
'''

def calculate(a,o,c):
    if (o not in {'+', '-', '/', '*'}) :
        print("False")
    elif (o == '+') :
        return a+c 
    elif (o == '-') :
        return a-c 
    elif (o == '/') :
        return a//c
    elif (o == '*') :
        return a*c


arr = list(input().split( ))
a = int(arr[0])
o = arr[1]
c = int(arr[2])

print(f"{a} {o} {c} =", calculate(a,o,c))