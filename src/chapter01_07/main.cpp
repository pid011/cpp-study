// 지역 범위 local scope

#include <iostream>

using namespace std;

int main() {
    int x = 0;
    cout << x << " " << &x << endl;
    {
        int x = 1; // 지역 밖으로 나가면 사용 불가능
        cout << x << " " << &x << endl;
    }
    // 밖에 있는 x와 안에 있는 x의 주소가 다르다.

    { int x = 2; }
}
