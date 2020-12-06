// Enumerated Types
#include <iostream>
#include <typeinfo>

enum Color {
    COLOR_BLACK = -4, // 이 다음은 +1이 된 값이 들어감
    COLOR_RED,
    COLOR_BLUE = 5,
    COLOR_GREEN = 5, /// 심지어 같은 숫자도 가능 ㅇㅅㅇ
};

enum Feeling {
    HAPPY,
    JOY,
    TIRED,
};

// ENUM의 멤버들은 전역으로 작동하기 때문에 다른 enum에 있어도 이름이 겹치면 안된다.

int main() {
    using namespace std;

    //Color my_color = COLOR_RED;
    //cout << my_color << endl;

    //Color my_color = static_cast<Color>(3); // 명시적으로 캐스팅가능
}
