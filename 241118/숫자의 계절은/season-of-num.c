#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요

    int n;

    scanf("%d",&n);

    if (n == 12 || (1<=n<=2)){
        printf("Winter");
    }
    else if (3<=n<=5){
        printf("Spring");
    }
    else if (6<=n<=8){
        printf("Summer");
    }
    else if (9<=n<=11){
        printf("Fall");
    }
    return 0;
}