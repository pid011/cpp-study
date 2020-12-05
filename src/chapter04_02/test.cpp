#include <iostream>

#include "myconstants.h"

extern int a {123};
extern int b {456};

extern void do_something() {
    using namespace std;
    cout << "Hello" << endl;
    cout << myconstants::Pi << " " << &myconstants::Pi << endl;
}
