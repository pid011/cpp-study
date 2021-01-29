// Multi-dimensional Array
#include <iostream>

using namespace std;

int main()
{
    int array[3][4] = {
        { 1, 2 }, // 비어있는 부분은 기본값으로 채워짐
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 }
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << array[i][j] << '\t';
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << (int)&array[i][j] << '\t';
        }
        cout << endl;
    }
    //2차원이지만 메모리에서는 일렬로 나열됨
}
