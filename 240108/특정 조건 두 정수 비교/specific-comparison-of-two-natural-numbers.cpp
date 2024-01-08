#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin >> a >> b;

	//두 조건문의 결과값을 공백을 사이에 두고 출력해서 "1 "이렇게 쓰기
	if (a<b){
		cout << "1 ";
	}
	else{
		cout << "0 ";
	}

	if (a==b){
		cout << "1";
	}
	else{
		cout << "0";
	}
    // 여기에 코드를 작성해주세요.
    return 0;
}