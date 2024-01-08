#include <iostream>
using namespace std;

int main() {
    int a_m, a_e, b_m, b_e;
    cin >> a_m >> a_e;
    cin >> b_m >> b_e;

    //A가 B보다 수학의 점수도 크고 영어의 점수도 크면 1, 그렇지 않으면 0을 출력합니다.
    cout << (a_m > b_m && a_e > b_e );
    return 0;
}