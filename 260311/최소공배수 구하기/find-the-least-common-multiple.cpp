#include <iostream>
using namespace std;

void Make_LCM(int n, int m){
    int gcd;

    for(int i=1; i<=min(n,m); i++){
        if(n%i==0 && m%i==0){
            gcd=i;
        }
    }
    cout << n*m/gcd;
}
int n,m;

int main() {
    // Please write your code here.
    cin >> n >> m;
    Make_LCM(n,m);
    return 0;
}