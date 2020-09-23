#include <cstdio>
#include <iostream>

int main(int, char**) {
    using namespace std;

    int x = 1024;
    double pi = 3.14;

    std::cout << "x is\t" << x << std::endl;
    std::cout << "pi is\t" << pi << std::endl;
    // x is    1024
    // pi is   3.14

    int input;
    cin >> input;

    cout << "your input is " << input << endl;
    // int형으로 입력을 받을 때 최대값보다 넘으면 int형의 최대값으로
    // 입력을 받는다.
}
