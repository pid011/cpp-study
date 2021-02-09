// dynamically allocating arrays
#include <iostream>

int main()
{
    using namespace std;

    int len;
    cin >> len;

    int* arr = new int[len](); // 0으로 초기화

    arr[0] = 1;
    arr[1] = 2;

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << ' ' << uintptr_t(&arr[i]) << endl;
    }

    delete[] arr;
}
