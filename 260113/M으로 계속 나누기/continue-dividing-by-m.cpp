#include <iostream>

using namespace std;

int main() {
    int N, M;

    cin >> N;
    cin >> M;
    
    // Please write your code here.
    while (N>0) {
        cout << N << endl;
        N = N/M;
    }
    
    return 0;
}
