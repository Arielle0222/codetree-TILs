#include <iostream>

using namespace std;

int a, b;

int Make_Multiple(int a, int b){
    int cnt=1;
    for(int i=1; i<b+1;i++){
        cnt*=a;
    }
    return cnt;
}

int main() {
    cin >> a >> b;

    cout << Make_Multiple(a,b);
    // Please write your code here.

    return 0;
}