#include <stdio.h>

int main() {
    // 변수 선언
    int n;

	// 입력
	scanf("%d", &n);
    
    // 출력
	if(n == 2)
		printf("28");
	else if(n <= 7) {
    	if(n % 2 == 1)
        	printf("31");
    	else
        	printf("30");
	}
	else {
    	if(n % 2 == 0)
        	printf("31");
    	else
        	printf("30");
	}
	
    return 0;
}