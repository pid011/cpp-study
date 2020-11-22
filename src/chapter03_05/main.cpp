// Relational operators
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    /*{
        int x, y;
        cin >> x >> y;
        cout << "your input values are: " << x << " " << y << endl;

        if (x == y) {
            cout << "equal" << endl;
        }

        if (x != y) {
            cout << "Not equal" << endl;
        }

        if (x > y) {
            cout << "x is greater than y" << endl;
        }

        if (x < y) {
            cout << "x is less than y" << endl;
        }

        if (x >= y) {
            cout << "x is greater than y or equal to y" << endl;
        }

        if (x <= y) {
            cout << "x is less than or equal to y" << endl;
        }
    }*/
    cout << endl;
    {
        double d1(100 - 99.99); // 0.001
        double d2(10 - 9.99);   // 0.001

        if (d1 == d2) {
            cout << "equal" << endl;
        } else {
            cout << "Not equal" << endl;
            if (d1 > d2) {
                cout << "d1 > d2" << endl;
            } else {
                cout << "d1 < d2" << endl;
            }
        } // Not equal이 나옴
        // cout << abs(d1 - d2) << endl; // 5.32907e-15

        constexpr double Epsilon { 1e-10 };
        if (abs(d1 - d2) < Epsilon) {
            cout << "Approximately equal" << endl;
        } else {
            cout << "Not equal";
        } // 오차범위를 사용함으로써 해결 가능
    }
}
