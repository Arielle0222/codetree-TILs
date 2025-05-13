#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int g,a;

    cin >> g >> a;

    if (g == 0) {
        if (a >=19) cout << "MAN";
        else cout << "BOY";
    }
    if (g == 1){
        if(a>=19) cout << "WOMAN";
        else cout << "GIRL";
    }
    
    
    return 0;
}