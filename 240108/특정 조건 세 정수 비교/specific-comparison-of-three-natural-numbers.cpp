#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    //첫 번째 수가 세 정수의 최솟값(a는b,c둘 다 비교했을 떄 둘 다 작아야함.)과 일치한다면 1 아니면 0을 출력
    cout << (a <= b && a<=c) << " ";
    //세 개의 수가 모두 같으면 1 아니면 0 을 출력
    cout << (a==b==c);
    return 0;
}