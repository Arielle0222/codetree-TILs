#include <iostream>
using namespace std;

int main() {
    // Please write your code here. 
    
    int n;
    cin >> n;

    for (int i=n ; i<n*5+1; i+=n){
        cout << i << " ";
    }
    return 0;
}