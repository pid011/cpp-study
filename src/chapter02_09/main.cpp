#include "my_constants.hpp"
#include <iostream>

#define NUMBER 30 // C++에서는 거의거의거의 안씀

using namespace std;

void print_number(const int num) { // 매개변수에 const 사용 가능
    // num = 2; // fail
    int n = num;
    cout << n << endl;
}

int main(int, char**) {
    // 컴파일타임 상수
    // 상수는 선언 시에 반드시 초기화해줘야 한다.
    const double gravity { 9.8 };
    // gravity = 1.2 // fail

    int n;
    cin >> n;

    // 런타임 상수. 런타임에 값이 결정되지만 수정 불가능
    const int special_number(n);
    // special_number += 1; // fail
    cout << special_number << endl;
    // C++ 11
    // 컴파일타임에 값이 결정되는 상수라는 것을 표시
    // 런타임에 값이 결정되는 코드를 쓰면 오류남
    constexpr int my_const(123);
    // constexpr int my_const(n); // 사용 불가능

    cout << Constants::Pi << endl;
    cout << Constants::MyDouble * 4 << endl;
}
