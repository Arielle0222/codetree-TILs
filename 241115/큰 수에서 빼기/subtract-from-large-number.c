#include <stdio.h>

int main() {
    // 변수 선언
    int a, b;

	// 입력
	scanf("%d %d", &a, &b);
    
    // 출력
	if(a > b)
		printf("%d", a - b);
	if(a <= b)
		printf("%d", b - a);
    return 0;
}