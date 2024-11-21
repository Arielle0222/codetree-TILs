#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt_3 = 0;
    int cnt_5 = 0;

    for(int i=1; i<=10;i++){
        scanf("%d", &n);

        if (n%3==0){
            cnt_3++;
        }
        if(n%5==0){
            cnt_5++;
        }
    }
    printf("%d %d", cnt_3, cnt_5);

    return 0;
}