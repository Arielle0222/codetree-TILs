#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i=n, i<=5, i+=n){
        n = n*i;
        cout << n;
    }

    return 0;
}

