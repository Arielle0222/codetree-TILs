#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int m, f;

	// 입력
	cin >> m >> f;
    
    // 출력
    if(m >= 90 && f >= 95)
		cout << "100000";
	else if(m >= 90 && f >= 90)
		cout << "50000";
	else
		cout << "0";
	
    return 0;
}