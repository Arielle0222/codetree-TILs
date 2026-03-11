#include <iostream>

using namespace std;

string Find_Yes_or_No(int n){
    int a = n/10;
    int b = n%10;

    if(n%2==0 && ((a+b)%5==0)){
        return "Yes";
    }
    else    
        return "No";
}




/*string Find_Yes_or_No(int a, int b){
    int n = a*10+b;
    if(n%2==0 && (a+b)%5==0){
        return "Yes";
    }
    else
        return "No";
}*/


int main() {
    int n;
    cin >> n;

    cout << Find_Yes_or_No(n);
    // Please write your code here.

    return 0;
}