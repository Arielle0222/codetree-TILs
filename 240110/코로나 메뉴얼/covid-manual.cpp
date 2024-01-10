#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    char c1, c2, c3;
    int t1, t2, t3;
    
    // 입력
    cin >> c1 >> t1;
    cin >> c2 >> t2;
    cin >> c3 >> t3;
    
    // A가 2명 이상인지 판단하기
    if(c1 == 'Y' && t1 >= 37) {
        // 첫 번째 사람이 A라면, 남은 두 사람 중 한 사람이라도 A면 됩니다.
        if((c2 == 'Y' && t2 >= 37) || (c3 == 'Y' && t3 >= 37))
            cout << "E";
        else
            cout << "N";
    }
    else {
        // 첫 번째 사람이 A가 아니라면, 남은 두 사람 모두 A여야만 합니다.
        if((c2 == 'Y' && t2 >= 37) && (c3 == 'Y' && t3 >= 37))
            cout << "E";
        else
            cout << "N";
    }
    return 0;
}