#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    while(1) {
        int n;

        scanf("%d", &n);

        if (n==1) {
            printf("John\n");
        }
        else if(n==2){
            printf("Tom\n");
        }
        else if(n==3){
            printf("Paul\n");
        }
        else if(n==4){
            printf("Sam\n");
        }
        else{
            printf("Vacancy\n");
            break;
        }
    }
    return 0;
}
