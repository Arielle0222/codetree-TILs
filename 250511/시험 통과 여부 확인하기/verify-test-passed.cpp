#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    if (n>=80) {
        cout  <<  "pass";
    }
    else
        cout << 80-n << " more score";
    return 0;
}