#include <iostream>
using namespace std;

int main() {
    int a,b;

    cin >> a >> b;

    cout << a/b << "."; //정수 부분 먼저 출력

    a=a%b;

    for(int i=0; i<20 ; i++){    
        a*=10;
        cout << a/b;

        a%=b;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}

/*
[풀이]
a/b 에서 소숫점을 수학적으로 구하는 방법은 a를b로 나눈 나머지에 
10을 곱한 값을 b로 나눴을 때의 몫을 순서대로 적는 걸 반복
*/