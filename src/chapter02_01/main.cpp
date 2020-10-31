// chapter2_1: Fundamental data types

#include <iostream>

int main(int, char**) {
    using namespace std;

    bool b = false;
    cout << b << endl; // 0이면 false, 0이 아니면 true

    char ch = 'A';

    cout << (int)ch << endl;

    // float과 double은 정밀도의 차이
    float f = 3.141592f; // f를 빼면 리터럴이 double이여서 변환이 된다.
    double d = 3.141592;

    auto a = 3.141592; // auto를 사용하면 컴파일 시점에 타입을 자동으로 결정한다.
    cout << a << endl;

    // sizeof(): 변수 또는 데이터 타입의 사이즈를 알려줌
    cout << sizeof(a) << endl;

    // 변수 초기화 방법
    // 1. copy initialization
    int i1 = 123;

    // 2. direct initialization
    int i2(123);

    // 3. uniform initialization
    int i3 { 123 };

    // 한 줄에 같은 자료형의 변수를 여러개 선언할 수 있음
    int i { 0 }, j { 0 }, k { 0 };
}
