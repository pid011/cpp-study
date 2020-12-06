// struct
#include <iostream>

struct Person {
    double height = 3.0;
    float weight = 200.0;
    int age = 100;
    std::string name = "Mr. Incredible";

    void print() {
        using namespace std;
        cout << height << " " << weight << " " << age << " " << name << endl;
    }
};

struct Family {
    Person me, mom, dad;
};

Person get_me() {
    Person me {2.0, 100.0, 20, "Jack Jack"};
    return me;
}

int main() {
    using namespace std;

    //Person me {2.0, 100.0, 20, "Jack Jack"};
    //Person me2(me);

    //me.print();
    //me2.print();

    //Person me_from_func = get_me();
    //me_from_func.print();
}
