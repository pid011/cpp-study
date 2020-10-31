// chapter2_2: Integers

#include <iostream>
#include <limits>

int main(int, char**) {
    using namespace std;

    short s = 1;
    int i = 1;
    long l = 1;
    long long ll = 1;

    cout << sizeof(short) << endl; // 2 bytes
    cout << numeric_limits<short>::max() << endl;
    cout << numeric_limits<short>::min() << endl;

    cout << endl;

    cout << sizeof(int) << endl; // 4 bytes
    cout << numeric_limits<short>::max() << endl;
    cout << numeric_limits<short>::min() << endl;

    cout << endl;

    cout << sizeof(long) << endl; // 8 bytes(윈도우에서는 4바이트...?)
    cout << numeric_limits<long>::max() << endl;
    cout << numeric_limits<long>::min() << endl;

    cout << endl;

    cout << sizeof(long long) << endl; // 8 bytes
    cout << numeric_limits<long long>::max() << endl;
    cout << numeric_limits<long long>::min() << endl;

    /*
    32767
    -32768

    4
    32767
    -32768

    8
    9223372036854775807
    -9223372036854775808

    8
    9223372036854775807
    -9223372036854775808
    */

    cout << endl;

    s = 32767;
    s++; // overflow돼서 -32768이 나온다.
    cout << "(short)32767 + 1 = " << s << endl;

    cout << endl;

    cout << 22 / 4 << endl;        // 정수형으로 계산하기 때문에 소수점을 잘라낸다.
    cout << (float)22 / 4 << endl; // float형으로 계산하기 때문에 소수점이 남는다.
}
