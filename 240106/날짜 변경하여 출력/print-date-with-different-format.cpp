#include <iostream>
using namespace std;

int main() {
    
    int y,m,d;
    char c = '-';

    cin >> y;
    cin.get();
    cin >> m;
    cin.get();
    cin >> d;

    cout << m << c << d << c << y;

    return 0;
}