// chapter2_5: Floating Point Numbers

#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>

int main(int, char**) {
    using namespace std;

    cout << sizeof(float) << endl;       // 4
    cout << sizeof(double) << endl;      // 8
    cout << sizeof(long double) << endl; // 16

    cout << endl;

    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<long double>::max() << endl;
    /*
    3.40282e+38
    1.79769e+308
    1.18973e+4932
    */

    cout << endl;

    float f(3.141592f); // 리터럴에 f를 붙여야 float으로 인식한다.
    double d(3.141592);
    long double ld(3.141592);

    cout << 3.14 << endl;    // 3.14
    cout << 31.4e-1 << endl; // 3.14
    cout << 31.4e-2 << endl; // 0.314
    cout << 31.4e2 << endl;  // 3140

    cout << endl;

    cout << 1.0 / 3.0 << endl; // 0.333333
    cout << std::setprecision(16);
    cout << 1.0 / 3.0 << endl; // 0.3333333333333333

    cout << endl;

    float f2(123456789.0f); // 10 significat digits
    cout << std::setprecision(9);
    cout << f2 << endl; // 123456792 -> 정밀도 오류 발생

    cout << endl;

    double d2(0.1);
    cout << d2 << endl; // 0.1
    cout << std::setprecision(17);
    cout << d2 << endl; // 0.10000000000000001 -> 0.1과 아주 가까운 수를 표현

    cout << endl;

    double d3(1.0);
    double d4(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
    cout << setprecision(17);
    cout << d3 << endl; // 1
    cout << d4 << endl; // 0.99999999999999989 -> 역시나 정밀도 오류

    cout << endl;

    double zero = 0.0;
    double posinf = 5.0 / zero;
    double neginf = -5.0 / zero;
    double nan = zero / zero;
    cout << posinf << " = " << isinf(posinf) << endl; // inf = 1
    cout << neginf << " = " << isinf(neginf) << endl; // -inf = 1
    cout << nan << " = " << isnan(nan) << endl;       // -nan = 1
    cout << 1.0 << " = " << isnan(1.0) << endl;       // 1 = 0
    // isinf(), isnan()
}
