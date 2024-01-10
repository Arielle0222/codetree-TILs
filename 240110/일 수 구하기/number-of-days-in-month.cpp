#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int n;

	// 입력
	cin >> n;
    
    // 출력
    if(n == 2) //윤년일 때, 28일까지임!
		cout << "28";
	else if(n <= 7) { //윤년이 아닐 때, 7월달 전까지는, 그리고 또 홀수 달일 때 31일까지 있음!
    	if(n % 2 == 1)
        	cout << "31";
    	else
        	cout << "30"; //윤년이 아닐 때, 7월달 전까지, 그 때 또 짝수 달일 때는 30일까지 있지!
	}
	else {
    	if(n % 2 == 0)
        	cout << "31"; //윤년이 아닐 때,, 8월달 부터, 짝수 달일때는 31일까지 있고!
    	else
        	cout << "30"; // 윤년이 아닐 때, 8월달 부터, 홀수 달일때는 30일까지 있지!
	}
	
    return 0;
}