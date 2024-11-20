#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    
    scanf("%d", &n);

    for (int i=n; i<=n*5; i+=n) {
        printf("%d ", i);
    }
    return 0;
}