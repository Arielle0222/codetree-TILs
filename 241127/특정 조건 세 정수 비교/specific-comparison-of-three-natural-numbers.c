#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int a,b,c;

    scanf("%d %d %d", &a, &b,&c);

    //a minimum
    if (a<=b && a<=c){
        printf("1 ");
    }
    else {
        printf("0 ");
    }

    if (a == b ==c) {
        printf("1");

    }
    else {
        printf("0");
    }
    return 0;
}