#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    for(int i=a; i>b-1; i-=2){
        cout << i << " ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}