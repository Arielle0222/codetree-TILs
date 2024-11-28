#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    scanf("%d", &n);

    for (int i=0; i<n; i++){
        //" " 공백 있는거면 그냥 공백 먼저 계산?
        for (int j=0; j<i; j++){
            printf("  ");
        }
        //* 
        for (int j=0; j<(2 * n) - (2 * i) - 1; j++){
            printf("* ");
        }
        printf("\n");

        
    }
    return 0;
}