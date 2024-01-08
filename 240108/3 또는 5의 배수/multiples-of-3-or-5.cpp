#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int a, b;

	// 입력
	cin >> a;
    
    // 출력
    if(a%3==0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	
	if(a %5==0)
		cout << "YES";
	else
		cout << "NO";
	
    return 0;
}