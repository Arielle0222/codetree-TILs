#include <iostream>
using namespace std;

int main() {
    int a;

    cin >> a;

    if (a >= 10 && a<=20)
        cout << "yes";
    else
        cout << "no";
    return 0;
}

//C++에서는 조건 2개를 && , || 등을 사용하지 않고 동시에 표현할 수 없음에 주의하여 주세요.