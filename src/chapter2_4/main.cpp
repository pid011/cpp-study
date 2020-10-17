//chapter2_4: void

#include <iostream>

int main(int, char**) {
    int i = 123;
    float f = 123.456f;

    void* my_void;
    my_void = (void*)&i;
    my_void = (void*)&f;
    // void포인터를 사용하면 그 포인터에 대입할 변수의 데이터 타입이
    // 다르더라도 강제로 형변환하여 대입할 수 있다.
}
