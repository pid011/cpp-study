// while
#include <iostream>

int main()
{
    using namespace std;

    //{
    //    int count = 0;
    //    while (count < 10) {
    //        cout << count << endl;
    //        ++count;
    //    }
    //}

    //{
    //    int count = 1;
    //    while (count < 100) {
    //        if (count % 5 == 0) {
    //            cout << "Hello " << count << endl;
    //        }
    //        ++count;
    //    }
    //}

    int i = 1;
    while (i < 5)
    {
        int j = 1;
        while (j < i + 1)
        {
            cout << j << " ";
            ++j;
        }

        cout << endl;
        ++i;
    }
}
