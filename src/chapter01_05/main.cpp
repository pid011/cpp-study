// function
#include <iostream>

using namespace std;

int add_two_numbers(int a, int b) {
    int sum = a + b;
    return sum;
}

int main(int, char**) {
    cout << add_two_numbers(1, 2) << endl;
    cout << add_two_numbers(3, 4) << endl;
    cout << add_two_numbers(5, 6) << endl;
}
