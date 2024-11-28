#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    scanf("%d", &n);

    for (int i=0; i<n; i++){
        //printf("\n");
        for (int j=0; j<i+1; j++){
            printf("*");
        }
        printf("\n\n");
    }
    
    for (int i=n-2; i>=0; i--){
        //printf("\n");
        for (int j=0; j<i+1; j++){
            printf("*");
        }
        printf("\n\n");
    }
    return 0;
}