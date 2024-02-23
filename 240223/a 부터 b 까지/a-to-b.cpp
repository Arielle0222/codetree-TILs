/*
#include <iostream>
using namespace std;

int main() {
    int a,b;

    cin >> a >> b;

    for(int i=a ; i<=b; i++){
        if(a%2==0){
            cout << a*2 << " ";
        }
        else if(a%2==1){
            cout << a+3 << " ";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}
*/

#include <iostream>
using namespace std;

int main() {
    // 변수 선언
    int a, b;

    // 입력
    cin >> a >> b;

    // 출력
    for (int i = a; i <= b; ) {
        cout << i << " ";
        if (i % 2 == 1)
            i *= 2;
        else
            i += 3;
    }

    return 0;
}