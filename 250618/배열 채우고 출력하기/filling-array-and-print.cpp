#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    char arr_10[10];

    for (int i=0; i<10; i++){
        cin >> arr_10[i];
        
    }
    //arr_10[10] = '\0';  // manually terminate the string

    //cout << arr_10;
    
    for (int i=9; i>=0; i--){
        cout << arr_10[i];
    }
   
    return 0;
}