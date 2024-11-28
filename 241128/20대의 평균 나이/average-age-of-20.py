cnt = 0
sum_val = 0

while True :
	n = int(input())

	if (n%20<10) :
		cnt+=1
		sum_val+=n
		
	else:
		print(f"{sum_val/cnt:.2f}")
		break
