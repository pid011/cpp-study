// chapter2_6: boolean / if

#include <iostream>

// bool이 반환값인 함수
bool is_equal(int a, int b) {
    bool result = (a == b);
    return result;
}

int main(int, char**) {
    using namespace std;

    // true는 0이 아닌거, false는 0
    bool b1 = true;   // copy initialization
    bool b2(false);   // direct
    bool b3 { true }; // uniform

    cout << b1 << endl;     // 1
    cout << b2 << endl;     // 0
    cout << std::boolalpha; // 숫자로 나오는걸 true, false로 출력함
    cout << b1 << endl
         << b2 << endl;

    cout << endl;
    cout << boolalpha;

    // NOT operator
    cout << !true << endl;  // false
    cout << !false << endl; // true

    cout << endl;

    // AND oerator
    cout << (true && true) << endl;   // true
    cout << (true && false) << endl;  // false
    cout << (false && true) << endl;  // false
    cout << (false && false) << endl; // false

    cout << endl;

    // OR oerator
    cout << (true || true) << endl;   // true
    cout << (true || false) << endl;  // true
    cout << (false || true) << endl;  //true
    cout << (false || false) << endl; //false

    cout << endl;

    if (true) { // 실행함
        cout << "This is true" << endl;
    }

    if (false) { // 실행안함
        cout << "This is false" << endl;
    }

    cout << endl;

    if (3 > 1) {
        cout << "This is true" << endl;
    } else {
        cout << "This is false" << endl;
    }

    cout << endl;

    cout << is_equal(1, 1) << endl;
    cout << is_equal(1, 2) << endl;

    cout << endl;

    bool b4;
    cin >> b4;
    cout << "Your input: " << b4 << endl;
    // 0을 입력하면 false, 그 이외에는 true
}
