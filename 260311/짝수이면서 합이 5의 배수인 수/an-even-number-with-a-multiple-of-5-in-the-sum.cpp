#include <iostream>

using namespace std;

string Find_Yes_or_No(int n){
    int a,b;
    n=a*10+b;

    if(n%5==0){
        return "Yes";
    }
    else{
        return "No";
    }
}

int n;

int main() {
    cin >> n;  
    cout << Find_Yes_or_No(n);

    // Please write your code here.

    return 0;
}