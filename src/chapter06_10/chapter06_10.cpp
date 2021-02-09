// c-style symbolic const string
#include <iostream>

int main()
{
    using namespace std;

    // char* name = "Jack"; // error
    const char* name = "Jack";
    const char* name2 = "Jack";

    cout << uintptr_t(name) << endl;
    cout << uintptr_t(name2) << endl;
    // 컴파일러가 두 문자열 상수가 같다는 것을 인지하고 같은 메모리를 가리키도록 함

    int int_arr[3] = { 1, 2, 3 };
    char char_arr[] = "Hello";

    cout << int_arr << endl;  // 포인터 주소 출력
    cout << char_arr << endl; // 문자열 출력
    // cout이 문자열 배열만 예외적으로 문자열 그대로 출력함

    char c = 'Q';
    cout << &c << endl;
    // 문자열 배열인줄 알고 문자열처럼 출력하는데 null문자가 없어서 쓰레기 값을 출력
}
