#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int scr;

    cin >> scr;

    for(int i=scr; i<=100; i++){
        if (i >=90){
            cout << "A ";
        }
        else if (i>=80){
            cout << "B ";
        }
        else if (i>=70){
            cout << "C ";
        }
        else if(i>=60){
            cout << "D ";
        }
        else {
            cout << "F ";
        }
    }
    return 0;
}