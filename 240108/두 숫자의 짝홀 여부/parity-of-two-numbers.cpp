#include <iostream>
using namespace std;


int main() {
    int a, b;
    cin >> a >> b;

    if (a%2==0) {
        cout << "even" << endl;
    }
    else {
        cout << "odd" << endl;
    }

	//위 조건문과 아래의 조건문은 서로 별개임. 즉 독립적임
    if (b%2==0) {
        cout << "even";
    }
    else {
        cout << "odd";
    }
    return 0;
}