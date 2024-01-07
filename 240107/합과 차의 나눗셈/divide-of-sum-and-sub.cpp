#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    cout << fixed;
    cout.precision(2);

    cout << (double)(a+b) / (a-b);
    // 여기에 코드를 작성해주세요.
    return 0;
}