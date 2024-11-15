#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int a,b;

    scanf("%d %d", &a, &b);
    
    if(a < b)
		printf("1 ");
	else
		printf("0 ");
	
	if(a == b)
		printf("1");
	else
		printf("0");
    

    return 0;
}