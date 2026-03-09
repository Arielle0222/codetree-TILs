#include <iostream>

using namespace std;

void Make_n_m(int n, int m){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout <<"1";
        }
        cout << endl;
    }
}

int n, m;

int main() {
    cin >> n >> m;
    Make_n_m(n,m);
    // Please write your code here.

    return 0;
}