#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    bool satisfied = true; //응 나 소수야! 

    for (int i=2; i<n; i++){
        if (n%i==0) {
            bool satisfied = false; //응 ㅋㅋ 나 소수 아니야
        }
    }

    if (satisfied == true) {
        printf("P");
    }
    else {
        printf("C");
    }
    return 0;
}