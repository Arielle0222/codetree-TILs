#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    //여기는 지금 a~b 까지 몇 번 반복해야 하는지 모름 즉 while ㄱㄱ
    int a,b,i;
    
    scanf("%d %d", &a, &b);

    i = a;

    //while은 먼저 출력 값 제시 -> 조건 ㄱㄱ
    while (i<=b) {
        printf("%d ", i);

        if (i%2==1){
            i*=2;
        }
        else {
            i+=3;
        }
    }
    return 0;
}