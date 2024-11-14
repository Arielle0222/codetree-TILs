#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char c;
    double a,b;

    scanf("%c",&c);
    scanf("%lf\n%lf",&a,&b);

    printf("%c\n",c);
    printf("%.2lf\n",a);
    printf("%.2lf",b);
    return 0;
}