#include <iostream>

using namespace std;

int Calculate (int a, char o, int b){
    if (o == '+'){
        return a+b;
    }
    else if (o == '-'){
        return a-b;
    }
    else if (o == '/'){
        return a/b;
    }
    else if (o == '*'){
        return a*b;
    }
    else
        return false;
}



int a;
int c;
char o;

int main() {
    cin >> a >> o >> c;

    cout << a << o << c << '=' << Calculate(a,o,c);

    // Please write your code here.

    return 0;
}