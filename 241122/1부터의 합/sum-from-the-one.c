#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum_val=0;

    scanf("%d", &n);

    for (int i=1; i<=100; i++){
        sum_val+=i;

        if (sum_val>=n){
            printf("%d", i);
            break;
        }
    }

   
    return 0;
}