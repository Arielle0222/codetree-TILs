#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);
    
    bool satisfied = true; //약수가 1이랑 본인 자신밖에 없음

    for (int i=2; i<n; i++){
        if (n%i==0){ // 그 사이에 하나라도 약수가 존재하면 faLse
            satisfied = false; 
        }
    }

    if (satisfied == false) {
        printf("C");
    }
    else    
        printf("P");
    return 0;
}