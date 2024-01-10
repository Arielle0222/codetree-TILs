#include <iostream>
using namespace std;

int main() {

	int s,a;

	cin >> s >> a;


	if (s == 0) {
		if (a >= 19) {
			cout << "MAN";
		}
		else {
			cout << "BOY";
		}
	}
	if (s ==1){
		if (a >= 19) {
			cout << "WOMAN";
		}
		else {
			cout << "GIRL";
		}
	}

	return 0;

}