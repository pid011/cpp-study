// Logical Operators
#include <iostream>
using namespace std;

int main() {
    cout << boolalpha;
    // logical NOT
    {
        bool x = true;
        cout << !x << endl;
    }

    // logical AND
    {
        bool x = true;
        bool y = false;
        cout << (x && y) << endl;
    }

    {
        bool hit = true;
        int health = 10;
        if (hit == true && health < 20) {
            cout << "die" << endl;
        } else {
            health -= 20;
        }
    }

    // logical OR
    {
        bool x = true;
        bool y = false;
        cout << (x || y) << endl;
    }

    // short circuit evaluation
    {
        int x = 2;
        int y = 2;

        if (x == 1 && y++ == 2) {
            // do something
        }
        cout << y << endl;
        // AND 연산자기 때문에 앞의 조건식이 false면 다음 조건식 실행을 하지 않는다.
    }

    // De Morgan's Law
    {
        bool x = true;
        bool y = false;

        // 아래 두 식은 다르다.
        !(x && y);
        !x && !y;
    }

    //XOR
    {
        // false false = false
        // false true  = true
        // true  false = true
        // true  true  = false

        bool x = true, y = false;

        cout << (x != y) << endl;
    }

    {
        bool v1 = true, v2 = false, v3 = false;

        bool r1 = v1 || v2 && v3;
        bool r2 = (v1 || v2) && v3;
        bool r3 = v1 || (v2 && v3);
        cout << r1 << endl; // true
        cout << r2 << endl; // false

        // OR보다 AND 연산자 우선순위가 높다.
    }
}
