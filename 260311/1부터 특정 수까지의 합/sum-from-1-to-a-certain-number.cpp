#include <iostream>

using namespace std;


int Make_total_and_division5(int n){
    int sum_total=0;
    for(int i=1; i<=n; i++){
        sum_total+=i;   
    }
    return sum_total/10; // 나중에 다른 곳에서도 사용 가능
}




int main() {
    int N;
    cin >> N;
    
    int result = Make_total_and_division5(N);
    cout << result;

    return 0;
}