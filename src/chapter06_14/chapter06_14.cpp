// Reference Variable
#include <iostream>
using namespace std;

struct SomethingStruct
{
    int value1;
    float value2;
};

struct OtherStruct
{
    SomethingStruct st;
};

void DoSomething(int& n) // refernce로 매개변수 받기 가능. const 붙이면 매개변수 값 수정 불가능
{
    cout << &n << endl;

    n = 10;
    cout << n << endl;
}

void DoSomethingArray(const int (&arr)[5]) // 배열도 reference가능. 단 배열 수가 반드시 지정되야 함
{
    for (size_t i = 0; i < 5; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int value = 5;

    int* ptr = nullptr;
    ptr = &value;

    int& ref = value;
    // reference 변수는 반드시 초기화되어야 함
    // 리터럴 상수 넣기 불가능

    const int y = 8;
    const int& refY = y;
    // const 변수를 넣기 위해서는 reference 변수도 const이어야 함

    cout << ref << endl;

    ref = 10;

    cout << value << ' ' << ref << endl; // 10 10

    cout << &value << endl;
    cout << &ref << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    // &ptr만 다른 주소값이 나온다.
    // value와 ref는 같은 주소임

    int n = 111;
    cout << &n << endl;
    DoSomething(n);
    cout << n << endl;

    const int len = 5;
    int arr[len] = { 1, 2, 3, 4, 5 };
    DoSomethingArray(arr);

    OtherStruct ot;

    int& v1 = ot.st.value1; // 긴 주소를 줄이는 것도 가능
    v1 = 1;

    int* const ptr = &value;
    int& ref = value;
    // 둘이 똑같음

    *ptr = 10;
    ref = 10;
}
