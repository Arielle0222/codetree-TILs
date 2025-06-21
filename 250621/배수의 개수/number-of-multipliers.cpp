#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    int total_3 = 0, total_5 = 0;

    for (int i=1; i<=10; i++){
        cin >> n;

        if (n%3 == 0) {
            total_3 ++;
        }
        if (n%5 == 0) {
            total_5 ++;
        }
    }

    cout << total_3 << " " << total_5;
    return 0;
}