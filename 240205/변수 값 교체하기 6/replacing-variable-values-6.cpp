#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 2;
    int b = 5;

    int c = a;
    a=b;
    b= c;

    std::cout << a << '\n' << b;
    return 0;
}