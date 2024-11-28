while True:
    # 변수 선언 및 입력
	n = int(input())
		
	# n이 1~4라면 번호에 맞는 이름을, 그게 아니라면 Vacancy를 출력한 뒤 종료합니다.
	if n == 1:
		print("John")
	elif n == 2:
		print("Tom")
	elif n == 3:
		print("Paul")
	elif n == 4:
		print("Sam")
	else:
		print("Vacancy")
		break