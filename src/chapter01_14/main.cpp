// chapter1_14: macro

#include <algorithm>
#include <iostream>

// 컴파일 타임에 코드를 만나면 해당 상수로 변경함 (C++에서는 잘 사용 안함)
#define MY_NUMBER 9

/*
매크로를 지정하여 코드를 실행할 조건을 지정 가능
주로 멀티 플랫폼 개발할 때 특정 플랫폼에서 작동하는 코드를 작성할 때 많이 사용
*/
#define LIKE_APPLE

int main() {
    using namespace std;

    cout << MY_NUMBER << endl;

    // 매크로로 MAX 함수를 정의하기 보다 std에 정의되어 있는 함수 사용하기
    cout << std::max(1 + 3, 2) << endl;

// LIKE_APPLE 매크로가 정의되어 있을 때
#ifdef LIKE_APPLE
    cout << "Apple" << endl;
#endif // LIKE_APPLE

// LIKE_APPLE 매크로가 정의되어 있지 않을 때
#ifndef LIKE_APPLE
    cout << "Orange" << endl;
#endif // !LIKE_APPLE

    return 0;
}
