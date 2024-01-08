#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b; //두 줄에 걸쳐 입력 받는 것도 그냥 cin으로 인식 가능!

    if (a && b >=1.0)
        cout << "High";
    else if (a && b >=0.5)
        cout << "Middle";
    else
        cout << "Low";
    return 0;
}