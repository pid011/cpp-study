// namespace

#include <iostream>

namespace MySpace1 {
    int do_something(int a, int b) {
        return a + b;
    }
} // namespace MySpace1

namespace MySpace2 {
    int do_something(int a, int b) {
        return a * b;
    }
} // namespace MySpace2

int main() {
    std::cout << MySpace1::do_something(4, 5) << std::endl;

    using namespace MySpace2;
    std::cout << do_something(4, 5) << std::endl;
}
