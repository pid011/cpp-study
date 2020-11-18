// 증감 연산자 increment decrement operators

#include <iostream>

int add(int x, int y) {
    return x + y;
}

int main(int, char**) {
    using namespace std;

    int x = 5;
    int y = --x; // 1 증가
    int z = ++x; // 1 감소

    cout << y << endl;
    cout << z << endl;

    int n1 = 5, n2 = 5;
    cout << ++n1 << " " << n2++ << endl; // 6 5
    cout << n1 << " " << n2 << endl;     // 6 6
    // 연산자가 앞에 붙으면 연산을 먼저 한 후에 스트림에 보내지만
    // 연산자가 뒤에 붙으면 스트림에 먼저 보낸 후에 연산을 한다.

    int a = 1;
    // 이런 방식의 코드는 사용하지 말 것
    int b = add(a, ++a); // 4
    cout << b << endl;
}
