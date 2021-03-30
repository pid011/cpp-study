// reference, const
#include <iostream>

using namespace std;

// refernece로 매개변수를 받게 되면 포인터와 같이 주소를 사용하여 가져올 수 있음
// const가 붙으면 수정 불가능
void DoSomething(const int& x)
{
    cout << x << endl;
}

int main()
{
    int x = 5;
    const int& a = x;

    // 변수를 넣어도 되고 상수를 넣어도 잘 작동함
    DoSomething(a);
    DoSomething(1);
    DoSomething(a + 1);
}
