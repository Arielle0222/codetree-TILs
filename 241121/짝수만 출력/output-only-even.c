#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int a,b,i;

    scanf("%d %d", &a, &b);
    i = a;

    while (i<=b) {
        printf("%d ", i);
        i+=2;
    }
    return 0;
}