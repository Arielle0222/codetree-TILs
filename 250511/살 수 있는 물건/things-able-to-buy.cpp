#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    
    int n;

    cin >> n;

    if (n>=3000) {
        cout << "book";
    }
    else if (n<1000) {
        cout << "no";
    }
    else
        cout << "mask";
}