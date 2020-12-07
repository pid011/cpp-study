// switch-case
#include <iostream>

enum class Colors {
    Black,
    White,
    Red,
    Green,
    Blue
};

void print_colorname(Colors color) {
    using namespace std;

    switch (color) {
    case Colors::Black:
        cout << "Black";
        break;
    case Colors::White:
        cout << "White";
        break;
    case Colors::Red:
        cout << "Red";
        break;
    case Colors::Green:
        cout << "Green";
        break;
    case Colors::Blue: {
        cout << "Blue";
        break;
    }
    default:
        break;
    }
    cout << endl;
}

int main() {
    using namespace std;
    print_colorname(Colors::Black);

    int x;
    cin >> x;

    // break가 없으면 해당 case 실행 후 다음 case도 모두 실행된다.
    switch (x) {
    case 0:
        cout << "Zero";
        break;
    case 1:
        cout << "One";
        break;
    case 2:
        cout << "Two";
        break;
    }
    cout << endl;
}
