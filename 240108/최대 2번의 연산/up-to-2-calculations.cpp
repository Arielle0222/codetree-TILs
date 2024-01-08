#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    //첫번째 조건이 두번째 조건에 영향을 준다. 즉 독립 아님.
    if (a%2==0){
        a=a/2;
    }

    if (a%2==1){
        a=(a+1)/2;
    }

    cout << a;
    return 0;
}