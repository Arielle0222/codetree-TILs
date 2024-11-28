#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;

    scanf("%d %d", &n, &m);

    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}