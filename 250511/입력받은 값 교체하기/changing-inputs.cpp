#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a,b,t; // a=14, b=5

    cin >> a >> b;

    t = a; // t =14
    a = b; // a = 5, b = 5
    b = t;

    cout << a << " " << b;
    return 0;
}