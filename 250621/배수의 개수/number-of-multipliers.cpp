#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int total_3, total_5;
    //int n;

    for(int i=1; i<=10; i++){
        int n;
        cin >> n;

        if (n%3 == 0) {
            total_3 ++;
        }
        else if (n%5 == 0) {
            total_5 ++;
        }
    }

    cout << total_3 << " " << total_5;

    return 0;
}