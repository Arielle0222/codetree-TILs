#include <iostream>

using namespace std;

void Make_int_square(int n){
    int cnt=1;

    for (int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            cout << cnt << " ";
            if(cnt==10){
                cnt=1;
            }
        }
        cout << endl;
    }
}

//int n, m;

int main() {
    int n;
    cin >> n;

    Make_int_square(n);

    // Please write your code here.

    return 0;
}