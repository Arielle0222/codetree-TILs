#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;

    scanf("%d", &a);

    if (a==1){
        printf("John");
    }
    else if(a==2){
        printf("Tom");
    }
    else if(a==3){
        printf("Paul");
    }
    else{
        printf("Vacancy");
    }
    return 0;
}