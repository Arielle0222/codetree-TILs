#include <iostream>
using namespace std;

//기본
/*
int main() {
    int a,b;
    cin >> a >> b;

    if(a<b){
        cout << b; 
    }
    else{
        cout << a;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}
*/

int main(){
    int a,b;
    cin >> a >> b;

    a = (a>b)? a : b;

    cout << a;
    return 0;   
}