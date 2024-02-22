#include <iostream>
using namespace std;

int main() {
    int a,b;
    int i; //
    // int i=a; 이렇게 정의하면 안되는 이유는 변수 i를 사용자 입력값을 읽기 전에 a의 값으로 초기화시켜버려서임

    cin >> a >> b;
    i=a; //여기서 i=a로 줘야함
   

    while(i<=b){
        cout << i << " ";
        i+=2;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}