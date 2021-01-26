// selection sort
#include <iostream>

using namespace std;

void print_array(const int array[], const int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void selection_sort(bool asce, int array[], const int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        int idx = i;
        for (int j = i + 1; j < length; j++)
        {
            if ((asce && array[idx] > array[j]) || (!asce && array[idx] < array[j]))
            {
                idx = j;
            }
        }
        std::swap(array[i], array[idx]);
    }
}

int main()
{
    const int length = 5;
    int array[length] = { 3, 5, 2, 1, 4 };

    print_array(array, length);

    selection_sort(true, array, length);
    print_array(array, length);

    selection_sort(false, array, length);
    print_array(array, length);

    return 0;
}
