"""
def modify(string):
    string += "apple"


_str = "banana"
modify(_str)  --> apple

print(_str) --> banana

>> banana

--------------------------------------------

def modify(string):
    string += "apple"
    return string --> apple


_str = "banana"
_str = modify(_str) --> bananaapple

print(_str)

>> bananaapple

"""


"""
함수 : 문자를 거꾸로 출력하는 함수
"""

"""def palindrome(arr) :
    for i in range(arr):
        return 


arr = input()


"""

n = 10

"""for i in range(1, n+1):
    print(i, end=" ")
    
"""
"""
for j in range(n, 0, -1):
    print(j, end=" ")
-------------------------------"""

"""
def palindrome(string):
    string_arr = string[i]
    for i in range(string[:], string[0], -1):
        return True

    
string_A = input()
palindrome(string_A)

if palindrome(string_A) :
    print("Yes")
else:
    print("No")

"""


def palindrome(string):
    # 문자열을 뒤집어서 원래 문자열과 같은지 비교
    return string == string[::-1]

# 사용자 입력
string_A = input()

# 결과 출력
if palindrome(string_A):
    print("Yes")
else:
    print("No")

