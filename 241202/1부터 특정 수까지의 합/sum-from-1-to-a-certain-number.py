N = int(input())

def add(n) :
    sum_val = 0
    for i in range(1,n+1):
        sum_val += i
    
    return sum_val // 10

result = add(N)
print(result) 
