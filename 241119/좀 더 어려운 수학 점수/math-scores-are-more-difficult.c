#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int a_m, a_e, b_m, b_e;

    scanf("%d %d %d %d",&a_m, &a_e, &b_m, &b_e);

    if (a_m > b_m) {
        printf("A");
    }

    else if ((a_m == b_m) && (a_e > b_e)) {
        printf("A");
    }

    else {
        printf("B");
    }
    return 0;
}