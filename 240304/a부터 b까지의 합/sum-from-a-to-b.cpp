#include <iostream>
using namespace std;

int main() {
    int a,b;
    int sum_val = 0;

    cin >> a >> b;

    for(int i=a ; i<=b; i++){
        sum_val+=i;
    }
    
    cout << sum_val;
    // 여기에 코드를 작성해주세요.
    return 0;
}