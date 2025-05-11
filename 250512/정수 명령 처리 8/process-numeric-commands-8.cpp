#include <iostream>
#include <string>
#include <list>

using namespace std;

int N;
string command[10000];
int A[10000];

int main() {
    
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_front" || command[i] == "push_back") {
            cin >> A[i];
        }
    }

    // Please write your code here.
         
    list<int> l; 
    
    for (int i=0; i<13; i++){
        if (command[i] == "push_back"){
            l.push_front[i];
            cout << l.back() << endl;
        }
        else if(command[i] == "push_front"){
            l.push_front[i];
            cout << l.front() << endl;
        }
        else if (command[i] == "pop_front"){
            l.pop_front[i];
            cout << l.front() << endl;

        }
        else if (command[i] == "pop_back"){
            l.pop_back[i];
            cout << l.back() << endl;
        }
        else if(command[i] == "size"){
            cout << l.size() << endl;
        }
        else if(command[i] == "empty") {
            if (l.empty()){
                cout << 1;
            }
            else {
                cout << 0;
            }
        }
        else if(command[i] == "front"){
            cout << l.front() << endl;
        }
        else if(command[i] == "back"){
            cout << l.back() << endl;
        }
    }

    return 0;
}
