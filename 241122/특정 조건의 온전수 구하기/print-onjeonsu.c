#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        //세 조건을 모두 만족하지 않는 경우니까 && 가 아니라 ||
        if (i%2==0 || i%10==5 || (i%3==0 && i%9!=0)){
            continue;
        }
        //위 조건을 만족하지 않는게 온전수임
        printf("%d ", i);
    }
    
    return 0;
}