#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    double n;

    scanf("%lf", &n);

    if (n>=3000){
        printf("book");
    }
    else if(n>=1000){
        printf("mask");
    }
    else{
        printf("no");
    }
    return 0;
}