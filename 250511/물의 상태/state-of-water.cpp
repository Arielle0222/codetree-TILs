#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    float n ;

    cin >> n;

    if (n>=100) {
        cout << "vapor";
    }
    else if (n<0) {
        cout << "ice";
    }
    else {
        cout << "water";
    }
    return 0;
}