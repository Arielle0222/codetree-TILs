#include <iostream>
using namespace std;

int main() {
    int s;
    cin >> s;
    
    //출력되는 값은 문자여! --> string으로 결과값 받아야 하지
    string result = (s == 100)? "pass" : "failure";

    cout << result;
    // 여기에 코드를 작성해주세요.
    return 0;
}

/*
#include <iostream>
using namespace std;

int main() {
    int s;
    cin >> s;

    string result = (s == 100) ? "pass" : "failure";

    cout << result;

    // 여기에 코드를 작성해주세요.
    return 0;
}

*/