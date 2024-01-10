#include <iostream>

int main() {
    // 연도 입력 받기
    int y;
    std::cin >> y;

    // 윤년 판단
    bool isLeapYear = false;

    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        isLeapYear = true;
    }

    // 결과 출력
    std::cout << std::boolalpha << isLeapYear << std::endl;

    return 0;
}