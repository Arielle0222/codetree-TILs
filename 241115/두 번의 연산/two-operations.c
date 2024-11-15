#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;

    scanf("%d",&a);

    if (a%2==1) {
        a+=3;
    }

    if (a%3==0) {
        a /=3;
        printf("%d",a);
    }
   
    return 0;
}