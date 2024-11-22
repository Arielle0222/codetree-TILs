#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum_val=0, cnt=0;

    for(int i=1; i<=10; i++){
        scanf("%d", &n);
        
        // 0이상 200이하의 정수들의 합 --> 문제 제대로 읽자요
        if(n >= 0 && n <= 200){
            sum_val +=n;
            cnt++;
        }
       
    }
    
    printf("%d %.1lf", sum_val, (double)sum_val/cnt);
    return 0;
}