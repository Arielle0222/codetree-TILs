#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d",&n); 
    
    if (n == 2 )
        printf("28");
    else if (n <= 7)
        if (n%2 == 1 ) {
            printf("31");
        }
        else {
            printf("30");
        }
    else {
        else if (n%2 == 0) {
            printf("31");  
        }
        else {
            printf("30");
        }
    }
        
    return 0;
}