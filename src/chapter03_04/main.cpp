// sizeof, comma operator, conditional operator
#include <iostream>
using namespace std;

int main() {
    {
        float a { 1 };
        // sizeof는 함수가 아니라 연산자이다.
        cout << sizeof(float) << endl;
        cout << sizeof(a) << endl;
        cout << sizeof a << endl;
    }
    cout << endl;
    {
        // comma operator
        int x { 3 };
        int y { 10 };
        int z = (++x, ++y); // ++x; ++y; int z = y;

        cout << x << " " << y << " " << z << endl;
    }
    cout << endl;
    {
        int a = 1, b = 10;
        int z;
        // comma의 우선순위가 assignment보다 낮아서 assignment가 먼저 실행됨
        z = a, b;
        cout << z << endl; // 1

        z = (++a, a + b);  // ++a = 2, z = 2 + 10
        cout << z << endl; // 12
    }
    cout << endl;
    {
        // conditional operator (arithmetric if)

        bool on_sale = true;
        // 삼항연산자는 대입할 변수가 const여도 사용가능
        const int price = on_sale ? 10 : 100;

        cout << price << endl;
    }
}
