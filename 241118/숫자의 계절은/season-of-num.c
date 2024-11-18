#include <stdio.h>

int main() {
    // 변수 선언
    int m;

	// 입력
	scanf("%d", &m);
    
    // 출력
	if(m >= 12 || m <= 2)
		printf("Winter");
	else if(m <= 5)
		printf("Spring");
	else if(m <= 8)
		printf("Summer");
	else
		printf("Fall");
		
    return 0;
}