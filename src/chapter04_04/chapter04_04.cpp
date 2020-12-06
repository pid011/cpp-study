// auto, type inference
#include <iostream>

auto add(int x, int y) {
    return x + y;
}

// trailing return type / C++ 11
auto add(double x, double y) -> double {
    return x + y;
}

int main() {
    using namespace std;

    auto a = 123; // auto는 초기화와 함께 사용해야 함
    auto d = 123.0;
    auto c = 1 + 2;
    auto result = add(1, 2);

    return 0;
}
