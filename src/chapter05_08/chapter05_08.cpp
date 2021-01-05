// break, continue
#include <iostream>
using namespace std;

void BreakOrReturn()
{
    while (true)
    {
        char ch;
        cin >> ch;

        if (ch == 'b') break;
        if (ch == 'r') return;
    }

    cout << "Hello" << endl;
}

int main()
{
    //int count = 0;
    //while (true)
    //{
    //    cout << count << endl;
    //    if (count == 10)
    //    {
    //        break;
    //    }
    //    ++count;
    //}

    //BreakOrReturn();

    //for (int i = 0; i < 10; ++i)
    //{
    //    if (i % 2 == 0) continue;
    //    cout << i << endl;
    //}

    //int count = 0;
    //do
    //{
    //    if (count == 5)
    //    {
    //        continue;
    //    }

    //    cout << count << endl;
    //} while (++count < 10);
    // while (count < 10) // 증감연산자를 do 안에 넣으면 무한루프에 빠질 수 있음

    //// 무한루프에서 빠져나가기
    //int count = 0;
    //char ch;
    //while (true)
    //{
    //    cin >> ch;
    //    cout << ch << " " << ++count << endl;

    //    if (ch == 'x') break;
    //}

    return 0;
}
