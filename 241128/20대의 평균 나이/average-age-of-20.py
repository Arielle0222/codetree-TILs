cnt = 0
sum_val = 0

while True :
	n = int(input())

	if (n%20<10) :
		cnt+=1
		sum_val+=n
		
	elif (n%20>=10) :
		print(f"{sum_val/cnt:.2f}")
		break
