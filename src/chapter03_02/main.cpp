#include <iostream>

int main(int, char**) {
    using namespace std;

    int x = 1;
    // 단항연산자에 띄어쓰기를 하면 컴파일러에서는 알아서 띄어쓰기를 지우고 컴파일한다.
    // 하지만 사람이 봤을때 이해가 힘드므로 붙여서 쓸 것
    int y = -x;

    int z = x - (-y); // 이해하기 쉽게 괄호를 사용할 것
    cout << z << endl;

    int n1 = x % y; // 나머지 연산자
    int n2 = x / y; // 나누기 연산자
    cout << n1 << endl << n2 << endl;

    int i1 = 6;
    int i2 = 4;
    cout << i1 / i2 << endl; // 정수값으로 결과가 나옴

    cout << float(i1) / i2 << endl; // 둘 중 하나가 실수면 실수로 결과가 나옴

    cout << -5 % 2 << endl; // 왼쪽 값이 음수면 음수로 결과가 나옴

    // 대입 연산자
    // +=, -=, *=, /=, %=
}
