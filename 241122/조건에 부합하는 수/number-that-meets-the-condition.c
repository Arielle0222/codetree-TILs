#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;

    scanf("%d", &a);

    for (int i=1; i<=a; i++){
        //아래 조건을 만족하지 않는 수가 출력되어야 함 즉 조건인 모두 만족할 때를 적으면 됨
        if ((i%2==0 && i%4!=0) || (i/8)%2==0 || (i % 7 < 4)){
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}