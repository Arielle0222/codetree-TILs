#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.

    bool satisfied = true; // 다 3의 배수라고 가정

    for (int i=1; i<=5; i++){

        int a;
        scanf("%d", &a);

        if (a%3!=0){
            satisfied = false; //하나라도 3의 배수가 아닌게 나오면 0
        }
    }

    if (satisfied == false) {
        printf("0");
    }
    else {
        printf("1");
    }
    return 0;

}