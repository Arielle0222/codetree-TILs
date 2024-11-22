#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int a,b, sum_val=0;


    scanf("%d %d", &a, &b);

    //a>=b
    if (a<=b) {
        for(int i=a; i<=b; i++){
            if (i%5==0){
                sum_val+=i;
            }
        }
    }
    else if(a>=b) {
        for (int i=b; i<=a; i++){
            if (i%5==0){
                sum_val+=i;
            }
        }
    }

    printf("%d", sum_val);
    return 0;
}
