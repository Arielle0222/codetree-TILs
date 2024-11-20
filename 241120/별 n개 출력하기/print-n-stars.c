#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,i;

    scanf("%d", &n);

    // i=0부터 시작하니까 = 없이 while 루프 진행해야 힘
    while (i<n){
        printf("*\n");
        i++;
    }
    return 0;
}