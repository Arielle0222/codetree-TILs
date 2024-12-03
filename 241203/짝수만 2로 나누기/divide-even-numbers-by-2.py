'''
1. 함수 만들기 (해당 원소 중 짝수는 --> //2)
'''



def even2(arr):
    for i in range(n):
        if arr[i] % 2 == 0:
            arr[i] //= 2


n = int(input())
arr = list(map(int, input().split()))


even2(arr)
for elem in arr:
    print(elem, end=" ")

