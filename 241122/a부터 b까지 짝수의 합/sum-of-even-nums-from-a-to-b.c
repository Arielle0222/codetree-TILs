#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int a,b, sum_val=0;

    scanf("%d %d", &a, &b);

    for (int i=a; i<=b; i++){
        if (i%2==0){
            sum_val+=i;
        }
    }
    printf("%d", sum_val);
    return 0;
}