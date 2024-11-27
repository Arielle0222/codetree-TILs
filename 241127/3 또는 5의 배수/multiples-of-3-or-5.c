#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;

    scanf("%d", &a);

    if (a%3==0) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    
    if (a%5==0) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}