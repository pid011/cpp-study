#include <iostream>

int main() {
    using namespace std;

    int x = 012; // 앞에 0을 붙이면 8진수
    cout << x << endl;

    int x2 = 0xf; // 0x 붙이면 16진수
    cout << x2 << endl;

    // C++ 14
    int x3 = 0b1010'1111'1010; // 2진수 표기법
    cout << x3 << endl;

    const int price_per_item = 10;
    int price = 250;
    int m = price * price_per_item; // 식에 바로 상수를 집어넣기보다 const변수를 활용하기
    cout << m << endl;
    return 0;
}
