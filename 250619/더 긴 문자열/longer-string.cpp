#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string str_1;
    string str_2;

    cin >> str_1 >> str_2;

    if (str_1.length() > str_2.length() ){
        cout << str_1 << " " << str_1.length();
    }
    else if (str_2.length() > str_1.length() ){
        cout << str_2 << " " << str_2.length();
    }
   
    else {
        cout << "same";
    }
    return 0;
}