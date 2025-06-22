#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string words[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    
    char enter; //string이 아님
    cin >> enter;

    int cnt = 0;

    for (int i = 0; i < 5; i++) {
        if (words[i][2] == enter || words[i][3] == enter) { //3,4번째 글자가 입력한 문자일 때
            cout << words[i] << endl;
            cnt ++;
        }

    }

    cout << cnt;
    return 0;
}