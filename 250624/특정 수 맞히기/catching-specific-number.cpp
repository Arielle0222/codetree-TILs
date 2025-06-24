#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    while(1){
        int n;
        cin >> n;

        if(n<25) 
            cout << "Higher" << endl;
        else if(n>25) 
            cout << "Lower" << endl;
        else{
            cout << "Good";
            //{}이 없으면 break가 else 안에 포함이 안됨
            break    
        }
    }
    return 0;

}