#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;

    cin >> str;

    int len = str.length();

    str[1] = 'a';
    str[len - 2] = 'a';

    cout << str << endl;
    return 0;
}


