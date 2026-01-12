#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int a=0;
    cin >> n;

    for(int i=1; i<=5; i++){
        a = n*i;
        cout << a << " ";
    }
    return 0;
}