#include <iostream>
#include <string> // 문자열 라이브러리 필요

using namespace std;

bool Is_Contains_369(int n) {
    string s = to_string(n); // 숫자를 "123" 같은 문자로 변환
    // '3' 혹은 '6' 혹은 '9'가 문자열 안에 하나라도 있다면 true
    if (s.find('3') != string::npos || 
        s.find('6') != string::npos || 
        s.find('9') != string::npos) {
        return true;
    }
    return false;
}

bool Is_MagicNumber(int n){
    return n%3==0 || Is_Contains_369(n);
}


int main() {
    int a, b;
    cin >> a >> b;

    int cnt = 0;

    for(int i=a; i<=b; i++){
        if(Is_MagicNumber(i)){
            cnt++;
        }
    }
    cout << cnt;

    // Please write your code here.

    return 0;
}