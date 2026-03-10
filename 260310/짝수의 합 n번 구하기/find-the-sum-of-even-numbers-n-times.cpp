#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin >> n;
    
    for (int i=0; i<n; i++){
        int a,b;
        int result = 0;

        cin >> a >> b;

        for (int i=a; i<=b; i++){
            if (i%2==0){
                result+=i;
            }
        }
    }
    cout << result << endl; 
    return 0;
}


