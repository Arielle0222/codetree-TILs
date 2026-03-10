#include <iostream>
#include <algorithm>

using namespace std;

void Make_GCD(int n, int m){
    for(int i=0; i=min(n,m); i++){
        if(n%i == 0 && m%i ==0)
            cout << i;
    }
}

int n, m;

int main() {
    cin >> n >> m;

    Make_GCD(n,m);

    // Please write your code here.

    return 0;
}

