#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0;
    scanf("%d", &n);

    while(1){
        if (n>=1000){
            break;
        }
        else if (n%2==0){
            n = n * 3 + 1;
        }
        else if (n%2==1){
            n = n * 2 +1;
        }
        cnt++;
    }
    printf("%d", cnt);

    return 0;
}