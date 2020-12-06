// Type conversion
#include <iostream>
#include <typeinfo>

int main() {
    using namespace std;

    // cout << typeid("hello").name() << endl; // 타입이름을 반환함

    //{
    //    // numeric promotion (small -> big)
    //    float a = 1.0f;
    //    double d = a;

    //    cout << typeid(a).name() << endl;
    //}
    //{
    //    // numeric conversion (big -> small)
    //    int i = 30000;
    //    char c = i;

    //    cout << static_cast<int>(c) << endl;
    //}
    //{
    //    // int, unsigned int, long, unsigned long, long long, unsigned long long, float, double, long double
    //    // cout << 5u - 10 << endl;
    //}

    {
        int i = (int)4.0;               // C-style casting
        int i2 = int(4.0);              // C++ style casting
        int i3 = static_cast<int>(4.0); // C++ style casting
    }
}
