#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    int cnt_c = 0;
    int cnt_h = 0; 
    int cnt_t = 0;
    
    scanf("%d", &n);
    
  

    for (int i=1; i<=n; i++){
        if (i%12==0){
            cnt_t++;
        }
        else if (i%3==0){
            cnt_h++;
        }
        else if (i%2==0){
            cnt_c++;
        }
    }

    printf("%d %d %d", cnt_c, cnt_h, cnt_t);
    return 0;
}