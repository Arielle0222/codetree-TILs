#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a,b,c;
    cin >> a >> b >> c;

    if (a>b && a<c) cout << a; //a is middle number 2 1 3 
    else if (b>a && b<c) cout << b;              // 1 2 3
    else if (c>a && c<b) cout << c;              // 1 3 2
    return 0;
}