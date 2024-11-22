#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum_val=0, cnt=0;

    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        int a;

        scanf("%d", &a);
        sum_val+=a;
        cnt++;
    }

    printf("%d %.1lf", sum_val, (double)sum_val/cnt);
    
    return 0;
}