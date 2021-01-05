// random numbers
#include <cstdlib> // std::rand(), std::srand()
#include <ctime>
#include <iostream>
#include <random> // C++

using namespace std;

int GetRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (RAND_MAX + 1.0);
    return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

int main()
{
    //// C-style
    //std::srand(5323);                                    // seed 고정
    //std::srand(static_cast<unsigned int>(std::time(0))); // 랜덤 시드

    //for (int i = 1; i < 101; i++)
    //{
    //    // cout << std::rand() << "\t";
    //    cout << GetRandomNumber(10, 15) << "\t";

    //    if (i % 5 == 0) cout << endl;
    //}

    // C++ 11
    std::random_device rd;
    std::mt19937 mersenne(rd());                // create a mersenne twister
    std::uniform_int_distribution<> dice(1, 6); // 범위

    for (int i = 0; i <= 20; i++)
    {
        cout << dice(mersenne) << endl;
    }

    return 0;
}
