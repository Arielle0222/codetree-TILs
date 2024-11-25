#include <stdio.h>

int main() {
    int n;
    int i = 0; // 작업 횟수를 for 문에서 관리

    while (i < 3) { // 작업을 최대 3번까지만 수행
        scanf("%d", &n);

        if (n % 2 == 1) {
            continue; // 홀수는 넘어감
        } else {
            // 짝수라면 작업 수행
            printf("%d\n", n / 2);
            i++; // 작업 횟수 증가
        }
    }

    return 0;
}
