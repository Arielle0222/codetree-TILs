n = int(input())


for i in range(1,n+1):
	#온전하지 않은 수
	if i % 2 == 0 :
		continue
	elif i % 10 == 5 :
		continue
	elif i % 3 == 0 and i % 9 != 0 :
		continue
	print(i, end=" ")	
#print(i, end=" ")