// for-each loop
#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>

int main()
{
    using namespace std;

    //const int fibonacci[] = { 0, 1, 1, 2, 300, 3, 5, 8, 13 };
    vector<int> fibonacci = { 0, 1, 1, 2, 300, 3, 5, 8, 13 };

    int maxNumber = std::numeric_limits<int>::lowest();

    for (const auto& n : fibonacci)
    {
        maxNumber = std::max(maxNumber, n);
    }
    cout << maxNumber << endl; // 300

    //// C#의 foreach와 같음
    //// 함수의 매개변수와 같은 방식으로 작동하기 때문에
    //// reference로 받아서 사용하는 것이 좋음
    //for (const auto& number : fibonacii)
    //{
    //    cout << number << " ";
    //}
    //cout << endl;
}
