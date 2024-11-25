#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int sum_val=0, cnt=0;

    while (1){
        int n;
        
        scanf("%d", &n);

        if (n%20 <=9){
            sum_val+=n;
            cnt++;
            continue;
        }
        else {
            printf("%.2f",(double)sum_val/cnt);
            break;
        }
    }
    return 0;
}