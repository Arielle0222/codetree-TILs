#include <iostream>
using namespace std;

int main() {
    //앞으로는 이렇게 변수 선언하는 걸로.
    double ft = 30.48, mi = 160934;

    cout << fixed;
    cout.precision(1);

    cout << "9.2ft = " << 9.2 * ft << "cm"<< endl;
    cout << "1.3mi = " << 1.3 * mi << "cm";
    return 0;
}