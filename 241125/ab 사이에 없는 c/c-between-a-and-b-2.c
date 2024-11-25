#include <stdio.h>
#include <stdbool.h>

//다 만족한다는 전제 하에 만약에 하나라도 틀린게 나오면 그때 NO로 진행

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);

    bool satisfied = true; //a~b 사이에 c의 배수가 없음. 만약 있으면 NO

    for (int i=a; i<=b; i++){
        if (i%c==0){
            satisfied = false; 
        }
    }

    if (satisfied == false) {
        printf("NO");
    }
    else {
        printf("YES");
    }
    return 0;
}