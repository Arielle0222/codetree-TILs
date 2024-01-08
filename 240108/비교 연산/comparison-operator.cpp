#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    cout << (a >=b) << endl;
    cout << (a >b) << endl;
    cout << (a <=b) << endl;
    cout << (a <b) << endl;
    cout << (a ==b) << endl;
    cout << (a !=b) << endl;
    return 0;
}

//C/C++ 에서 0이 아닌 값은 true이고, 0은 false로 정의됩니다.
/*
if (15) {
		cout << "A" << endl;
	}

	if (0) {
		cout << "B" << endl;
	}
*/