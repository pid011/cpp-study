// array indexing
#include <iostream>

int main()
{
    using namespace std;

    //int value = 7;
    //int* ptr = &value;

    //cout << uintptr_t(ptr) << endl;
    //cout << uintptr_t(ptr + 1) << endl; // +4
    //cout << uintptr_t(ptr + 2) << endl; // +4
    //// 자료형 크기만큼 증가함

    //int array[] = { 1, 2, 3, 4, 5 };

    //int* ptr = array;

    //for (int i = 0; i < 5; i++)
    //{
    //    //cout << array[i] << ' ' << uintptr_t(&array[i]) << endl;
    //    cout << *(ptr + i) << ' ' << uintptr_t(ptr + i) << endl;

    //    // 똑같은 결과가 나옴
    //}

    char name[] = "Jack";
    const int name_len = sizeof(name) / sizeof(char);

    char* ptr = name;

    for (int i = 0; i < name_len - 1; i++)
    {
        cout << *(ptr++) << endl;
    }
}
