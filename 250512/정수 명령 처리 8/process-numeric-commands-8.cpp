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
    
    for (int i=0; i<N; i++){
        if (command[i] == "push_front"){
            l.push_front(A[i]);
            //cout << l.front() << endl;
        }
        else if(command[i] == "push_back"){
            l.push_back(A[i]);
            //cout << l.back() << endl;
        }
        else if (command[i] == "pop_front") {
            if (l.empty()) {
                cout << -1 << '\n';
            }    
            else {
                cout << l.front() << '\n';
                l.pop_front();
            }
        }
        else if (command[i] == "pop_back") {
            if (l.empty()) cout << -1 << '\n';
            else {
                cout << l.back() << '\n';
                l.pop_back();
            }
        }
        else if(command[i] == "size"){
            cout << l.size() << endl;
        }
        else if(command[i] == "empty") {
            if (l.empty()){
                cout << 1 << endl;
            }
            else {
                cout << 0 << endl;
            }
        }

        //cout << (l.empty() ? 1 : 0) << '\n';
        //git pull checking




        else if(command[i] == "front"){
            cout << l.front() << endl;
        }
        else if(command[i] == "back"){
            cout << l.back() << endl;
        }
    }

    return 0;
}
