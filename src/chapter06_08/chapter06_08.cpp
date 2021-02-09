// pointer, fixed array
#include <iostream>

void change_number(int* array)
{
    array[0] = 100;
}

int main()
{
    using namespace std;

    int array[5] = { 9, 7, 5, 3, 1 };

    //cout << array[0] << ' ' << array[1] << endl;
    //cout << array << endl; // 배열의 첫번째 원소의 주소를 가리킴
    //cout << &(array[0]) << endl;

    //cout << *array << endl; // 배열의 첫번째 원소의 값

    //char name[] = "jack";
    //cout << *name << endl;

    //int* ptr = array;
    //cout << ptr << endl;
    //cout << *ptr << endl;

    //cout << sizeof(array) << endl; // size of int array
    //int* ptr = array;
    //cout << sizeof(ptr) << endl; // size of int pointer

    //change_number(array);
    //cout << array[0] << endl; // 함수로 포인터를 전달하면 함수에서 값 변경 가능
}
