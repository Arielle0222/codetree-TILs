#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    
    scanf("%d",&n);

    if (n<5) {
        printf("%d\ntiny", n*n);
    }
    if (n>=5) {
        printf("%d",n*n);
    }
    return 0;
}