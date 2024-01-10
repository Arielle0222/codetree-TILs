#include <iostream>
using namespace std;

int main() {
    int a_e, a_m, b_e, b_m;
    cin >> a_m >> a_e >> b_m >> b_e;

    if((a_m>b_m) || (a_m == b_m && a_e > b_e))
        cout << "A";
        
    else
        cout << "B";
    return 0;
}