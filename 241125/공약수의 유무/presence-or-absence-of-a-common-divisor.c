#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    int prod = 1;

    scanf("%d %d", &a, &b);
    
    bool satisfied = false;//최대공약수가 존재하지 않는다는게 기본 전제 조건
    for (int i=a; i<=b; i++){
        if (1920%i==1 && 2880%i==2){
            satisfied = true;
        }
    }

    if (satisfied = true){
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}