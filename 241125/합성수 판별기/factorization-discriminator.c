#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);
    
    bool satisfied = false; //합성수가 없는게 기본 조건
    for (int i=2; i<n; i++){
        if (n%i==0){
            satisfied = true;
        }
    }
    if (satisfied == true){
        printf("C");
    }
    else {
        printf("N");
    }
    return 0;
}