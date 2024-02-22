#include <iostream>
using namespace std;

int main() {
    int a,b;

    cin >> a >> b;

    cout << a/b << "."; //정수 부분 먼저 출력

    a=a%b;

    for(int i=0; i<20 ; i++){    
        a*=10;
        cout << a/b;

        a%=b;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}