#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];

    for (int i=0; i<10; i++){
        scanf("%d", &arr[i]);

        if (arr[i]==0) {
            break;
        }
    }

    for(int i=arr[i]+1; i>=0; i--){
         printf("%d ", arr[i]);
    }
        
    
    return 0;
}