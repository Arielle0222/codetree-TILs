#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int n;

	// 입력
	cin >> n;
    
    // 출력
    if(n >= 90)
		cout << "A";
	else if(n >= 80)
		cout << "B";
	else if(n >= 70)
		cout << "C";
	else if(n >= 60)
		cout << "D";
	else
		cout << "F";
    return 0;
}
