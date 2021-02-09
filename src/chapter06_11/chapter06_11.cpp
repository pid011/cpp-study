// dynamic memory allocation
#include <iostream>

int main()
{
    using namespace std;

    // int array[1000000] // 정적으로 할당한 메모리는 스택으로 들어감

    int* ptr = new int { 7777 }; // 힙에 데이터 저장
    // int* ptr = new (std::nothrow) int { 7777 }; // 에러 발생안함

    if (ptr == nullptr)
    {
        cout << "Could not allocate memory" << endl;
        return 0;
    }

    *ptr = 100;

    cout << *ptr << ' ' << uintptr_t(ptr) << endl;

    delete ptr; // 메모리 회수
    ptr = nullptr;

    cout << "After delete" << endl;

    if (ptr)
    {
        cout << ptr << endl;
        cout << *ptr << endl;
    }
    else
    {
        cout << "Do nothing" << endl;
    }
}
