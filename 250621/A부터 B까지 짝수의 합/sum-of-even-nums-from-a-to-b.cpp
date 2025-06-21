#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a,b;
    cin >> a >> b;

    int result = 0;

    for(int i=a; i<=b; i++){
        if (i % 2 == 0){
            result += i;
        }
    }   

    cout << result;
    return 0;
}