#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int cnt = 0, sum_val = 0;

    for (int i=0; i<10; i++){
        scanf("%d ", &arr[i]);
        cnt+=1;
        sum_val+=arr[i];
        
        if(arr[i] >= 250) {
			sum_val = sum_val - arr[i];
			cnt = cnt -1;
            break;
        }
    }
	printf("%d %.1lf", sum_val, (double)sum_val/cnt);

    return 0;
}