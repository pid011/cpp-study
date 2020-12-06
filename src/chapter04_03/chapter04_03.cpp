// using, Ambiguity
#include <iostream>

namespace a {
    int my_a {10};
    int count {3};
} // namespace a

namespace b {
    int my_a {10};
}

int main() {
    // using namespace를 전역에 선언해버리면 좋지 않음
    // header보다는 cpp파일에 넣는게 좋음
    using namespace std;
    using namespace a;

    cout << my_a << endl;
    // cout << count << endl; // std에도 count가 있어서 모호성이 생김
}
