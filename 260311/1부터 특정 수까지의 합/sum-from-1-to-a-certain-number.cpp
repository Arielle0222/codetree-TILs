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
    //cin >> N;
    // 입력받는 과정에서 에러나면 그냥 return 0으로 프로그램 종료해라
    if (!(cin >> N)) return 0; 

    int result = Make_total_and_division5(N);
    cout << result;

    return 0;
}