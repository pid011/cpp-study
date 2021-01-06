// array basic usage 2
#include <iostream>

using namespace std;

void DoSomething(int students_scores[20]) {
    cout << (int)&students_scores << endl;    // 포인터 주소가 main의 배열과 다름
    cout << (int)&students_scores[0] << endl; // 포인터 주소가 main의 배열과 같음

    cout << (int)&students_scores[0] << endl;
    cout << (int)&students_scores[1] << endl;
    cout << (int)&students_scores[2] << endl;
}

int main() {
    const int num_students = 20;

    int students_scores[num_students] { 1, 2, 3, 4, 5 };

    cout << (int)&students_scores << endl; // 배열의 첫 번째 주소를 가리키고 있음
    cout << (int)&students_scores[0] << endl;
    cout << (int)&students_scores[1] << endl;
    cout << (int)&students_scores[2] << endl;

    cout << endl;

    DoSomething(students_scores);

    return 0;
}
