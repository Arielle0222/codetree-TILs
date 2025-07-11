#include <iostream>

using namespace std;

int main() {
    // 변수 선언 및 입력
    int n;
   	cin >> n;
	
	// 숫자로 이루어진 삼각형을 출력합니다.
	for(int i = 1; i <= n; i++) {
		for(int j = 0; j < i; j++) {
			cout << i << " ";
		}
		cout << endl;
	}
	
	return 0;
}
