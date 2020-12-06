// string
#include <iostream>
#include <limits>
#include <string>

int main() {
    using namespace std;
    // using std::string;

    //const char my_str[] = "Hello, World";
    //const string my_hello {"Hello, World"};
    //cout << my_hello << endl;

    //cout << "Your name? : ";
    //string name;
    ////cin >> name;
    //std::getline(std::cin, name);

    //cout << "Your age? : ";
    //string age;
    //// cin >> age;
    //std::getline(std::cin, age);

    //cout << name << " " << age << endl;

    //cout << "age: ";
    //int age;
    //cin >> age;

    //// 다음 입력 무시하는 문제 해결방법
    //// std::cin.ignore(32767, '\n'); // 방법 1
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 방법 2

    //cout << "name: ";
    //string name;
    //std::getline(std::cin, name);

    //string a("Hello, ");
    //string b("World");
    //string hw = a + b;
    //hw += "I'm good";
    //cout << hw << endl;

    string a("Hello, World");
    cout << a.length() << endl; // 12, 문자열 길이
}
