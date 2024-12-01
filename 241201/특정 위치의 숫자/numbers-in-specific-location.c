#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[10];
    int result =0;

    for(int i=0; i<10; i++) {
        scanf("%d ", &arr[i]);
    }


    result = arr[2] + arr[4] + arr[9];    
    printf("%d", result);

   

    return 0;
}