#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int y;

	// 입력
	cin >> y;
    
    // 출력
    //1
	if(y % 4 == 0) {
        //2
		if(y % 100 == 0) {
            //3
			if(y % 400 == 0) {
				cout << "true";
			}
            ////////////////////
			//3번 else
            else {
				cout << "false";
			}
		}
        //2번 else
		else {
			cout << "true";
		}
	}
    //나머지 경우에는 윤년이 아닙니다.
    //1번 else
	else {
		cout << "false";
	}

    return 0;
}