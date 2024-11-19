#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int n, n_g;

    scanf("%d %d", &n_g, &n);

    if (n >= 19) {
        if (n_g == 0) {
            printf("MAN");
        }
        else {
            printf("WOMAN");
        }
    }
    else if (n<19) {
        if (n_g == 0) {
            printf("BOY");
        }
        else {
            printf("GIRL");
        }
    }
    return 0;
}