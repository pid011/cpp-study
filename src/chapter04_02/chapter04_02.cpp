// Global Variable, Static Variable, Internal Linkage, External Linkage
#include <iostream>

#include "myconstants.h"
using namespace std;

/*
external: 다른 파일에서 접근 가능. internal: 다른 파일에서 접근 불가능
int _x; // external linkage. extern은 붙여도 되고 안붙여도 됨
static int _x; // internal linkage
*/

extern int a;
extern void do_something();

int main() {
    do_something();
    cout << a << endl;

    cout << myconstants::Pi << " " << &myconstants::Pi << endl;
    return 0;
}
