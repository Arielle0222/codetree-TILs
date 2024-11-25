#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0;
    scanf("%d", &n);
    
    while (1){
        //n이 1이 되는 경우 While문을 탈출해야 함.
        //해당 조건문이 가장 마지막으로 가면 n==1일때에도
        //continue문을 따라서 n%2==1 루프에서 계속 도니까 그보다 위에서 반복문을 실행해야 함
        
        if(n%2==0){
            n=n/2;
            cnt++;
            continue;
        }
        if(n==1){
            break;
        }
        if(n%2==1){
           n=n*3+1;
           cnt++;
           continue;
        }
    }
    printf("%d", cnt);
    return 0;
}