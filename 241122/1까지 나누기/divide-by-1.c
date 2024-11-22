#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    for (int i=1; i<=100; i++){
        n=n/i;
        if (n<=1) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}