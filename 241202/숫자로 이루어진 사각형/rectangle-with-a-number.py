# 변수 선언 및 입력:
input_n = int(input())


# n개의 줄에 걸쳐 특정 문자열을 출력하는 함수입니다.
def print_num(n):
    cnt = 1
    for _ in range(n):
        for _ in range(n):
            print(cnt, end=" ")
            cnt += 1
            if cnt == 10:
                cnt = 1
        print()

print_num(input_n)