"""# 변수 선언 및 입력:
a, b, c = tuple(map(int, input().split()))


# 최솟값을 반환하는 함수를 작성합니다.
def get_min(a, b, c):
    min_val = a
    if min_val > b:
        min_val = b
    if min_val > c:
        min_val = c

    return min_val


print(get_min(a, b, c))"""

"""# 변수 선언 및 입력
numbers = tuple(map(int, input().split()))

# 최솟값을 반환하는 함수를 작성합니다.
def get_min(*args):
    min_val = args[0]
    for num in args:
        if num < min_val:
            min_val = num
    return min_val

# 함수 호출 및 출력
print(get_min(*numbers))
"""

# 변수 선언 및 입력
numbers = tuple(map(int, input().split()))

# 최솟값을 반환하는 함수
def get_min(*args):
    return min(args)

# 함수 호출 및 출력
print(get_min(*numbers))
