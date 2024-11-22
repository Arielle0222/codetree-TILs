#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, i=1, sum_val=0;

    scanf("%d", &n); 

    while (i<=n) {
        int a;
        scanf("%d", &a);

        if (a%2==1 && a%3==0){
            sum_val+=a;
        }
        i++;
    }
    printf("%d", sum_val);

    return 0;
}