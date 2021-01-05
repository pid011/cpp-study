// std::cin
#include <iostream>

using namespace std;

int GetInt()
{
    while (true)
    {
        cout << "Enter an integer number: ";
        int x;
        cin >> x;

        if (cin.fail())
        {
            cin.clear();
            cout << "Invalid number, please try again" << endl;
            cin.ignore(32767, '\n');
        }
        else
        {
            cin.ignore(32767, '\n');
            return x;
        }
    }
}

char GetOperator()
{
    while (true)
    {
        cout << "Enter an operator (+, -): ";
        char op;
        cin >> op;
        cin.ignore(32767, '\n');

        if (op == '+' || op == '-')
        {
            return op;
        }
        else
        {
            cout << "Invalid operator, please try again" << endl;
        }
    }
}

void PrintResult(int x, char op, int y)
{
    if (op == '+')
    {
        cout << x + y << endl;
    }
    else if (op == '-')
    {
        cout << x - y << endl;
    }
    else
    {
        cout << "Invalid operator" << endl;
    }
}

int main()
{
    int x = GetInt();
    char op = GetOperator();
    int y = GetInt();

    PrintResult(x, op, y);

    return 0;
}
