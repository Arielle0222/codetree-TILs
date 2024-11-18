#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;

    scanf("%d",&a);

    if (a % 13 == 0 || a % 19 == 0 ){
        printf("True");
    }
    else {
        printf("False");
    }
    return 0;
}