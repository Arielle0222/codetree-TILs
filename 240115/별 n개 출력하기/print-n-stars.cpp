#include <iostream>
using namespace std;

int main() {
    int n,i;
    cin >> n;

    while(i<n){ //i=1 초기 입력값 입력 안해서 여기 코드에서 i는 0부터 시작함. 그래서 i<n+1하면 별이 6개 찍히는 거임.
        cout << '*' << endl;
        i+=1;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}