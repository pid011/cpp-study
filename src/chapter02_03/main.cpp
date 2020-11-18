// Fixed-width Integers

#include <iostream>
// #include <cstdint> // iostream이 cstdint를 선언함

int main(int, char**) {
    using namespace std;

    int16_t i(5);
    int8_t myint(65); // char로 교체하기 때문에 결국엔 char이랑 같다.
    cout << myint << endl;

    int_fast32_t fi(5);  // 32비트 데이터타입 중 빠른 타입
    int_least64_t fl(5); // 적어도 64비트인 데이터타입
}
