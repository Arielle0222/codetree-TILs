#include <stdio.h>

int main() {
    // 변수 선언
    char a;

	// 입력
	scanf("%c", &a);
    
    // 출력
	for(int i = 1; i <= 8; i++)
		printf("%c", a);

    return 0;
}