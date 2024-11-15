#include <stdio.h>

int main() {
    // 변수 선언
    int n;

	// 입력
	scanf("%d", &n);
    
    // 출력
	if(n >= 90)
		printf("A");
	else if(n >= 80)
		printf("B");
	else if(n >= 70)
		printf("C");
	else if(n >= 60)
		printf("D");
	else
		printf("F");
    return 0;
}