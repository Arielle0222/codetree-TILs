#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    if(a>0){
        for(int i=1 ; i<=b ; i++){
            cout << a;
        }
    }
    else{
        cout << "0";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}