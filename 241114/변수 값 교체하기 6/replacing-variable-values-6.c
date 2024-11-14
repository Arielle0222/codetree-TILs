#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 2;
    int b = 5;
    int temp = a; // temp == 2 and a == 2 and b ==5;

    a = b; // temp == 2 and a == 5 and b ==5
    b = temp; // temp == 2 and a ==5 and b ==2

    printf("%d\n%d",a,b);
    return 0;
}


// result ;
// a -> 5 b ->2