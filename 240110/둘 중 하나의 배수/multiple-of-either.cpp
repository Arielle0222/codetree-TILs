#include <iostream>
using namespace std;


int main() {
    int a;
    cin >> a;

    // 참이면 1 아니면 0 출력
    cout << (a%3==0 || a%5==0);
    
    return 0;
}