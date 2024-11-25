#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int sum_val=0, cnt=0;

    while (1){
        int n;
        
        scanf("%d", &n);

        //20대가 아닌 수가 들어오면 그 전까지의 평균 값을 출력하는 거임
        if(n>=30 || n<=19) {
            printf("%.2f", (double)sum_val/cnt);
            break;
        }

        sum_val+=n;
        cnt++;
    }
    return 0;
}