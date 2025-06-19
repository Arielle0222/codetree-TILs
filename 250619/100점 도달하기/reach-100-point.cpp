#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int score;

    cin >> score;

    for (int i = score; i <101; i++){
        if (score >=90){
            cout << "A";
        }
        else if (score >=80){
            cout << "B";
        }
        else if(score>=70){
            cout << "C";
        }
        else if(score>=60){
            cout << "D";
        }
        else {
            cout << "F";
        }
        
    }
    return 0;
}