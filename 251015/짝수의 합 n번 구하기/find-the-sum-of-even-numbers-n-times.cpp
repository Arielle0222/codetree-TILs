#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a,b;
    int n;
    cin >> n;

    for (int i = 1; i<=n; i++){
        cin >> a >> b;
        int sum_reult = 0;
    

        for (int j = a; j<=b; j++){
            if (j%2==0) {
                sum_reult+=j;
            }
        }
        cout << sum_reult << "\n";
    }

    
    return 0;
}

