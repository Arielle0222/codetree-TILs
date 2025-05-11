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

    list<int> l;

    for (int i = 0; i < N; i++) {
        if (command[i] == "push_front") {
            l.push_front(A[i]);
        } else if (command[i] == "push_back") {
            l.push_back(A[i]);
        } else if (command[i] == "pop_front") {
            if (l.empty()) cout << -1 << '\n';
            else {
                cout << l.front() << '\n';
                l.pop_front();
            }
        } else if (command[i] == "pop_back") {
            if (l.empty()) cout << -1 << '\n';
            else {
                cout << l.back() << '\n';
                l.pop_back();
            }
        } else if (command[i] == "size") {
            cout << l.size() << '\n';
        } else if (command[i] == "empty") {
            cout << (l.empty() ? 1 : 0) << '\n';
        } else if (command[i] == "front") {
            if (l.empty()) cout << -1 << '\n';
            else cout << l.front() << '\n';
        } else if (command[i] == "back") {
            if (l.empty()) cout << -1 << '\n';
            else cout << l.back() << '\n';
        }
    }

    return 0;
}
