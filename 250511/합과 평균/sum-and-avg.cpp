#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a,b;

    cin >> a >> b;

    cout << fixed;
    cout.precision(1);


    cout << a+b << " " << (double)(a+b)/2;
    return 0;
}