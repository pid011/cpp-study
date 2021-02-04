// null pointer
#include <iostream>
#include <cstddef>

using namespace std;

void do_something(double* ptr)
{
    cout << "address of pointer variable in do_something() " << &ptr << endl;

    if (ptr != nullptr)
    {
        // do something useful
        cout << *ptr << endl;
    }
    else
    {
        // do nothing with ptr
        cout << "Null ptr, do nothing" << endl;
    }
}

int main()
{
    double* ptr1 = NULL;    // c-style
    double* ptr2 = nullptr; // modern c++

    do_something(ptr2);
    do_something(nullptr);

    double d { 123.4 };
    do_something(&d);

    ptr2 = &d;
    do_something(ptr2);

    std::nullptr_t nptr; // nullptr만 넣을 수 있음

    cout << "address of pointer variable in main() " << &ptr2 << endl;
}
