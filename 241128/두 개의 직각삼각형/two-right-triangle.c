

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // 왼쪽 별 출력
        for (int j = 0; j < n - i; j++) {
            printf("*");
        }
        // 가운데 공백 출력
        for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }
        // 오른쪽 별 출력
        for (int j = 0; j < n - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
