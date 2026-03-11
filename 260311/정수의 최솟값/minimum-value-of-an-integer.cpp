#include <iostream>

using namespace std;

int Find_Minimum(int a, int b, int c){
    if (a<=b && a<=c){
        return a;
    }
    else if(b<=a && b<=c){
        return b;
    }
    else{
        return c;
    }
}



int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << Find_Minimum(a,b,c);
    // Please write your code here.

    return 0;
}