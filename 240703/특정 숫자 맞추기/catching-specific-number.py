#무한 loop --> whle True:
while True:
    n = int(input())
    if(n < 25):
        print("Higher")
    elif(n>25):
        print("Lower")
    else:
        print("Good")
        # 무한 루프 탈출 시 --> break
        break