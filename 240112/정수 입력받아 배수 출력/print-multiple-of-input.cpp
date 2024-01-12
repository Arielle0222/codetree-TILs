#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = n; i<5*n+1; i+=n){
        cout << i << " ";
    }
    return 0;
}