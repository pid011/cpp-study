// void pointer, generic pointer
#include <iostream>

using namespace std;

int main()
{
    int i = 5;
    float f = 3.f;
    char c = 'a';

    void* ptr = nullptr;

    // 주소를 붙여넣는 것이기 때문에 문제가 없음.
    // 다만 자료형이 무엇인지를 알 수가 없음
    ptr = &i;
    ptr = &f;
    //ptr = &c;

    // 몇바이트를 더해야 하는지 알 수 없기 때문에 오류가 남
    //cout << ptr + 1 << endl;

    cout << &f << " " << ptr << endl;

    // 자료형을 모르기 때문에 해당 코드도 오류가 남
    //cout << *ptr << endl;

    // float pointer로 변환한 후에 사용이 가능함
    cout << *static_cast<float*>(ptr) << endl;

    // 문법이 최신화되면서 void pointer를 대신할 수 있는 것들이 생겨 잘 사용하지 않게 됨
}
