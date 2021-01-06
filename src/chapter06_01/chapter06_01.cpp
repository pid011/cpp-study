// array basic usage 1
#include <iostream>

using namespace std;

enum Students {
    JACK,
    JAMES,
    KAIN,
    Kaiser,
    STUDENTS_COUNT
};

int main() {
    int arr[100] { 1, 2, 3 };
    cout << arr[1] << endl;

    int scores[STUDENTS_COUNT];
    scores[JACK] = 65;
    scores[JAMES] = 80;

    cout << scores[JACK] << endl;

    return 0;
}
