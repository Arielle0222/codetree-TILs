while True:
    arr = input().split() #리스트로 나타남.
    a = int(arr[0])
    b = int(arr[1])
    s = arr[2]

    print(a*b)
    
    if s == 'C':
        break