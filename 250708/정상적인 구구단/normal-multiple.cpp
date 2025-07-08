#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << i << " * " << j << " = " << i*j;
            if(j != n) cout << ", "; // 마지막이 아니면 쉼표 출력x
        }
        cout << "\n";
    }
    return 0;
}