#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 5, b = 6, c = 7;
    int temp = a;
    
	a = c;
    c = b;
	b = temp;


    return 0;
}

//result;
/*
a = 5 -> 7
b = 6 -> 5
c = 7 -> 6
*/