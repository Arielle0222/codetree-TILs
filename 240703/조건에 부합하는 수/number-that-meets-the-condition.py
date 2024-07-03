a = int(input())

for i in range(1, a+1):
	#continue -> a
	if i % 2 == 0 and i % 4 != 0 :
		continue
	elif i // 8 == 0 :
		continue
	elif i % 7 <= 5 :
		continue
	#~a
	print(i, end= " ")