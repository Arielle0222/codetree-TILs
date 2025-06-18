#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    int arr[100];

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        cout << arr[i]*arr[i] << " ";
    }

    
    return 0;
}