#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    scanf("%d", &n);

    for (int i=n; i<=100 ; i++) {
        if (i>=90) 
            printf("A ");
        
        else if (i>=80) 
            printf("B ");
        
        else if (i>=70) 
            printf("C ");
        
        else if (i>=60) 
            printf("D ");
        
        else 
            printf("F ");
        
    }
    return 0;
}