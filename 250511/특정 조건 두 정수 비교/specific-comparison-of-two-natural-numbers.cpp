#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a,b;

    cin >> a >> b;

    if (a<b) {
        cout << 1 << " ";
    }
    else 
        cout << 0 << " ";
    
    if (a==b){
        cout << 1;
    }
    else 
        cout << 0;
    return 0;
}