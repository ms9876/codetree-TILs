#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요
    int a = 5, b = 6, c= 7;

    int d = a;
    a = c;
    c = b;
    b = d;

    std::cout << a << '\n' << b << '\n' << c;
    
    return 0;
}