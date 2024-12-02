def print_square(n):
    arr = [0] * n  # 크기 N의 배열 생성

    # 배열에 숫자 채우기
    current_value = 1
    for i in range(n):
        arr[i] = []  # 각 행에 리스트 초기화
        for j in range(n):
            arr[i].append(current_value)
            current_value += 1
            if current_value > 9:  # 9 다음에는 1로 초기화
                current_value = 1

    # 배열 출력
    for i in range(n):
        for j in range(n):
            print(arr[i][j], end=" ")
        print()  # 행을 출력한 후 줄바꿈

# 입력 받기
n = int(input())
print_square(n)
