#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin >> n;

    int result = 0;

    for(int i=1; i<=n; i++){
        result+=i;

        if(result >=n) {
            cout << i;
            break;
        }
    }
    return 0;
}