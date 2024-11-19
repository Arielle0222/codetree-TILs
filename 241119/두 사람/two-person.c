#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int a_a, b_a;
    char a_g, b_g;

    scanf("%d %c %d %c",&a_a, &a_g, &b_a, &b_g);

    if ((a_a >=19 && (a_g == 'M')) || (b_a >=19 && (b_g == 'M'))) {
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}