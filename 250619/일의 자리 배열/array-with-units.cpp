#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a,b;

    cin >> a >> b;
    int arr[10] = {a,b};


    //cout << a << b;

    for (int i=2; i<10; i++){
        arr[i] = (arr[i-1] + arr[i-2]) % 10;
        //cout << a << " " << b << " " << arr[i];
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}