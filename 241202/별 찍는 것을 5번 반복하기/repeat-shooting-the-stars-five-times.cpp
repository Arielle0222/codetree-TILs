#include <iostream>

using namespace std;

void print10star() {
    for(int i = 0; i < 10; i++)
        cout << "*";
    cout << endl;
}

int main() {

    for(int i = 0; i < 5; i++)
        print10star(); 

    return 0;
}