#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    while(1) {
        int n;

        scanf("%d", &n);

        if (n<25) {
            printf("Higher\n");
        }
        else if(n>25){
            printf("Lower\n");
        }
        else if(n==25){
            printf("Good\n");
            break;
        }
    }
    return 0;
}



// n<25 h
// n>25 L
//n==25 G