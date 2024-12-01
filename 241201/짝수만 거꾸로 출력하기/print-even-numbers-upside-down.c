#include <stdio.h>

int main() {
    int n;

    // 정수 n 입력
    scanf("%d", &n);

    int arr[n];

    // n개의 정수 입력
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 배열 역순으로 출력 (짝수만)
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] % 2 != 0) { // 홀수면 continue
            continue;
        }
        // 짝수일 경우 출력
        printf("%d ", arr[i]);
    }

    return 0;
}
