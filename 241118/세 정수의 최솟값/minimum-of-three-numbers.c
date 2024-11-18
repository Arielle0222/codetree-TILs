#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;  
    scanf("%d %d %d",&a,&b,&c);

    //a가 최솟값
    if (a<=b && a<=c) {
    printf("%d",a);
    }

    else if (b<=a && b<=c) {
    printf("%d",b);
    }
    else {
    printf("%d",c); 
    }

    return 0;
}








