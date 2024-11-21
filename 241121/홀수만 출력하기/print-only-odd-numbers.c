#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    
    int n;
    //정수 n개를 입력 받아 n번 반복한다.
    scanf("%d", &n); //n은 횟수
    
	for(int i = 1; i <= n; i++) {
        int a; // 입력 받는 값 의미
        scanf("%d", &a);
		if(a % 2 == 1 && a % 3 == 0)
			printf("%d\n", a);
	}
     
    return 0;
}