#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int prod = 1;
    int x=0;
    scanf("%d", &n);

    while(1){
        if (prod==n){
            break;
        }
        prod *=2;
        x++;
    }
    printf("%d", x);
    return 0;
}