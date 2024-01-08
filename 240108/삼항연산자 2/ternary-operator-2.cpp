#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    // char 일때는 ''로 써야 함 "" 안됨
    char result = a == 1 ? 't' : 'f';

    cout << result;
    // 여기에 코드를 작성해주세요.
    return 0;
}