#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int m;

	// 입력
	cin >> m;
    
    // 출력
	// 범위가 큰 것 부터 조건문에 사용하기
    if(m >= 12 || m <= 2)
		cout << "Winter";
	else if(m <= 5)
		cout << "Spring";
	else if(m <= 8)
		cout << "Summer";
	else
		cout << "Fall";
	
    return 0;
}