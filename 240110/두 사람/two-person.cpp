#include <iostream>
using namespace std;

int main() {
    int A_a, B_b;
    char A_s, B_s;

    cin >> A_a >> A_s >> B_b >> B_s;

    if(A_a>=19 && A_s=='M' || B_b>=19 && B_s=='M')
        cout << "1";
    else
        cout << "0";
    // 여기에 코드를 작성해주세요.
    return 0;
}



/*
문제 풀이 순서!!
1. 필요한 변수 먼저 생각
2. 조건문 해석
*/
