n = int(input())

def repeat(n):
    cnt = 1
    for _ in range(n):
        for _ in range(n):
            print(cnt, end=" ")
            cnt += 1
            if cnt == 10:
                cnt = 1 #초기화
        print()

repeat(n)