#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0;

    scanf("%d", &n);

    for (int i = 1; i<=n; i++){
        if (i%2==0||i%3==0||i%5==0){
            continue; //위 조건이 만족하지 않을 때 카운팅 됨
        }
        cnt++;
    }

    printf("%d", cnt);
    return 0;
}



//continue는 for, while 안에서만 사용 가능함
//continue는 if와 같이 쓰임 : 조건이 만족하면 아래 코드 실행 x
//[결론]continue는 조건문 필수