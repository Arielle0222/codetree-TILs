#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    while (a <= b) {
        cout << a << " ";

        if (a % 2 == 1) {
            a *= 2;
        } else {
            a += 3;
        }
    }

    //cout << a << " ";  // 루프를 빠져나온 a 값도 출력

    return 0;
}
