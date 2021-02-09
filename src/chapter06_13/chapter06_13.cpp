// const pointer
#include <iostream>

int main()
{
    using namespace std;

    {
        int value = 5;
        const int* ptr = &value;

        // *ptr = 6; // 포인터가 가리키는 주소의 값을 바꾸는 것 불가능

        cout << *ptr << endl;

        int value2 = 6;
        ptr = &value2; // 포인터에 저장되는 주소를 바꾸는 것은 가능

        cout << *ptr << endl;
    }

    //----------------------------------------------------------------------

    {
        int value = 5;
        int* const ptr = &value;

        *ptr = 10; // 포인터가 가리키는 주소의 값을 바꾸는것 가능
        cout << *ptr << endl;

        int value2 = 8;
        // ptr = &value2; // 포인터에 저장되는 주소 바꾸기 불가능
    }

    //-----------------------------------------------------------------------

    {
        int value = 5;
        const int* const ptr = &value;

        // *ptr = 6; // 포인터가 가리키는 주소의 값을 바꾸는 것 불가능
        cout << *ptr << endl;

        int value2 = 10;
        // ptr = &value2; // 포인터에 저장되는 주소 바꾸기 불가능
    }
}
