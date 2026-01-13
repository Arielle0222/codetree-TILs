#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a,b;
    
    cin >> a >> b;

    int len_a = a.length();
    int len_b = b.length();

    if (len_a<len_b){
        cout << b << " " << len_b;
    }
    else if (len_a == len_b){
        cout << "same";
    }
    else{
        cout << a << " " << len_a;
    }
    return 0;
}