// for loop
#include <iostream>
using namespace std;

int main()
{
    //for (int count = 0; count < 10; ++count)
    //{
    //    cout << count << endl;
    //}

    //// 여러개의 변수 선언 가능
    //for (int i = 0, j = 10; i < 10; ++i, --j)
    //{
    //    cout << i << " " << j << endl;
    //}

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << i << " " << j << endl;
        }
    }
}
