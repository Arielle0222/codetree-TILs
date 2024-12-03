def is_yun(n):
    if (n%4==0) :
        if (n%100==0 and n%400!=0) :
            return False
        else : 
            return True
    else :
        return False


y = int(input())

if is_yun(y):
    print("true")
else:
    print("false")


'''
y = int (input())

if (y%4==0) :
	if (y%100==0 and y%400!=0) :
		print("false") #윤년 아님
	else :
		print("true") #윤년
else :
	print("false") #윤년 아님


'''