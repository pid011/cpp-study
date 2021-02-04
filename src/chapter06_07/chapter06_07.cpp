// pointer
#include <iostream>
#include <typeinfo>

using namespace std;

int* my_func()
{
    return nullptr;
}

int main()
{
    int x = 5;
    double d = 123.0;

    //cout << x << endl;
    //cout << &x << endl; // &: address-of operator

    //// de-reference operator (*)
    //cout << *(&x) << endl;

    //int* ptr_x = &x;

    //cout << typeid(ptr_x).name() << endl; // vc++에서는 "int *"라고 나옴

    cout << sizeof(x) << endl;  // 4
    cout << sizeof(d) << endl;  // 8
    cout << sizeof(&x) << endl; // 4 (x86), 8 (x64)
    cout << sizeof(&d) << endl; // 4 (x86), 8 (x64)
    // 포인터는 주소만 저장하기 때문에 자료형에 관계없이 크기가 모두 같음
}
