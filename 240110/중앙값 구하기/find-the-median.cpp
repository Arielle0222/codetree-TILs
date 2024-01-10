#include <iostream>
using namespace std;

int main() {
    // 변수 선언
    int a, b, c;

    // 입력
    cin >> a >> b >> c;

    // 출력
    if(a > b) {
        if(c > a) {
            // a > b, c > a 일때 (c > a > b)
            cout << a;
        }
        // a > b, a > c 일때 (a가 가장 크고, b와 c중 더 큰 수가 중앙값)
        else if(b > c) {
            cout << b;
        }
        else {
            cout << c;
        }
    }
    else {
        if(c > b) {
            // b > a, c > b 일때 (c > b > a)
            cout << b;
        }
        // b > a, b > c 일때 (b가 가장 크고, a와 c중 더 큰 수가 중앙값)
        else if(a > c) {
            cout << a;
        }
        else {
            cout << c;
        }
    }
    return 0;
}