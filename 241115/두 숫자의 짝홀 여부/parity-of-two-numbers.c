#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int a,b;

    scanf("%d %d",&a,&b);

    if (a % 2 == 0){
        printf("even\n");
    }
    else {
        printf("odd\n");
    }

    if (b % 2 == 0){
        printf("even\n");
    }
    else {
        printf("odd");
    }
    return 0;
}