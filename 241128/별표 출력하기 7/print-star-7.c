#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}