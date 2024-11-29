#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    //0 이 나오기 전까지만 카운팅하고 거기까지의 합, 평균을 구하면 됨

    int arr[10];
    int cnt = 0, sum_val = 0;

    for(int i=0; i<10; i++){
        scanf("%d ", &arr[i]);

        if (arr[i]==0){
            break;
        }
        
        cnt += 1;
        sum_val += arr[i];
    }

    printf("%d %.1lf", sum_val, (double)sum_val/cnt);
    
    return 0;
}