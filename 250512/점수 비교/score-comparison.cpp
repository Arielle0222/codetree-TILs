#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a_m, a_e, b_m, b_e;

    cin >> a_m >> a_e >> b_m >> b_e;

    if (a_m > b_m && a_e > b_e) {
        cout << 1;
    }
    else cout << 0;
    return 0;
}