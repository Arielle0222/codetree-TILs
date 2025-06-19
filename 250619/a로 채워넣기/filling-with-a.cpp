#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string str;

    cin >> str;

    str[1] = 'a';
    //str[-2] = 'a'; //illegal there is no negative int
    str[str.length() - 2] = 'a';

    cout << str;
    return 0;
}