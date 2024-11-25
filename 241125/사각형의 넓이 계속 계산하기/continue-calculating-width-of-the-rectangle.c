#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    char c;

    while (1){
        scanf("%d %d %c", &a, &b, &c);

        int result = a*b;
        printf("%d\n", result);

        if (c=='C'){
            break;
        }
    }
    return 0;
}