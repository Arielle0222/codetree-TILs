#include <iostream>

using namespace std;

bool Is_Prime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0) {
            return false; // 소수 아님
        }
    }
    return true; //소수임
}



int a, b;
int cnt = 0;

int main() {
    cin >> a >> b;
    
    for(int i = a; i <= b; i++) {
    // Is_Prime(i)가 true를 반환할 때만 중괄호 안으로 들어감
    if (Is_Prime(i)) { 
        // cout << "[LOG] 소수 발견: " << i << endl; 
        cnt += i;
    }
}
    cout << cnt;

    // Please write your code here.

    return 0;
}