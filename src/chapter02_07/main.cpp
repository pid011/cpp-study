// chapter2_7: char

#include <iostream>
#include <limits>

int main(int, char**) {
    using namespace std;

    char c1(65);
    char c2('A');

    cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;
    // A A 65 65

    cout << endl;

    // c-style casting
    cout << (char)65 << endl;

    // cpp-style casting
    cout << char(65) << endl;
    cout << static_cast<char>(65) << endl;

    cout << endl;

    char c3;
    cin >> c3;
    cout << c3 << " " << static_cast<int>(c3) << endl;
    // cin에서 문자를 여러개 한번에 입력하면 첫번째 문자만 가져오고
    // 나머지는 버퍼에 저장했다가 나중에 cin실행시 가져옴
    cin >> c3;
    cout << c3 << " " << static_cast<int>(c3) << endl;
    cin >> c3;
    cout << c3 << " " << static_cast<int>(c3) << endl;
    cin >> c3;
    cout << c3 << " " << static_cast<int>(c3) << endl;

    cout << endl;

    cout << sizeof(char) << endl;                             // 1
    cout << int(std::numeric_limits<char>::max()) << endl;    // 127
    cout << int(std::numeric_limits<char>::lowest()) << endl; // -128

    cout << endl;

    cout << sizeof(unsigned char) << endl;                             // 1
    cout << int(std::numeric_limits<unsigned char>::max()) << endl;    // 255
    cout << int(std::numeric_limits<unsigned char>::lowest()) << endl; // 0

    cout << endl;

    cout << int('\n') << endl; // 10
    cout << "This is first line\nsecond line\n";
    cout << "This is first line" << endl
         << "secondline" << endl;
    // '\n'은 그냥 줄바꿈
    // endl은 줄바꿈과 동시에 cout의 버퍼에 있는 모든 문자를 출력
    // std::flush는 그냥 cout의 버퍼에 있는 모든 문자를 출력

    cout << endl;

    cout << "a\tb" << endl; // a    b

    cout << endl;

    cout << "\"Hello\"" << endl; // "Hello"
}
