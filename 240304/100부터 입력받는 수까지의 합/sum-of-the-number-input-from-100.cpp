#include <iostream>
using namespace std;

int main() {
    int n, sum_val=0;

    cin >> n;

    for(int i=n ; i<=100 ; i++){
        sum_val +=i;
    }

    cout << sum_val;
    // 여기에 코드를 작성해주세요.
    return 0;
}