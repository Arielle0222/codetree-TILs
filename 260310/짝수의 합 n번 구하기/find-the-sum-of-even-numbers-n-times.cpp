#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int result = 0;

        int a,b;
        cin >> a >> b;

        for(int i=a; i<b+1; i++){
            if (i%2==0){
                result +=i;
            }
        //cout << result << endl;
        }
        cout << result << enld;
    }
    return 0;
}