#include <stdio.h>

int main() {
    // 변수 선언 및 입력
    int a;
    scanf("%d", &a);
    
    if(a % 2 == 0)
        a /= 2;
    
    if(a % 2 == 1)
        a = (a + 1) / 2;
    
    printf("%d", a);
    return 0;
}