#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    
    scanf("%d",&n);

    if ((n % 2 == 1 && n % 3 == 0) || (n % 2 == 0 && n % 5 == 0)) {
        printf("true");
    }
    else 
        printf("false");
    return 0;
}

