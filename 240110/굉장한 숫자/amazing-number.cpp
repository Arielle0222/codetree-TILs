#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	if((n%2==1 && n%3==0) or (n%2==0 && n%5==0))
		cout << "true";
	else
		cout <<"false"; 
    // 여기에 코드를 작성해주세요.
    return 0;
}



//and는 or 보다 연산자 우선순위가 높다.