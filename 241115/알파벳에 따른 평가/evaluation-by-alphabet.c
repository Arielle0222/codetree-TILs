#include <stdio.h>

int main() {
    // 변수 선언
    char a;

	// 입력
	scanf("%c", &a);
    
    // 출력
	if(a == 'S')
		printf("Superior");
	else if(a == 'A')
		printf("Excellent");
	else if(a == 'B')
		printf("Good");
	else if(a == 'C')
		printf("Usually");
	else if(a == 'D')
		printf("Effort");
	else
		printf("Failure");
    return 0;
}