#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int cnt = 0, sum_val = 0;

    for (int i=0; i<10; i++){
        scanf("%d", &arr[i]);

        if (arr[i]==0) {
            break;
        }

        if (arr[i]%2==0){
            cnt+=1;
            sum_val+=arr[i];
        }

    }
    printf("%d %d", cnt, sum_val);
    return 0;
}