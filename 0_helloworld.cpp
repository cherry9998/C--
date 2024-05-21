// 이 프로그램은 화면 상에 'hello, world'를 출력하는 프로그램입니다.

#include <iostream>

int main()
{
    std::cout << "hello, world" << std::endl;

    std::cout << 10 << std::endl;
    std::cout << 0 << std::endl;
    std::cout << -2 << std::endl;

    std::cout << 2 + 2 * 2 << std::endl;

    // 문자 리터럴을 사용하려면 작은 따옴표와 함께 사용해야 한다.
    std::cout << 'A' << std::endl;

    // 정수 값을 문자로 변환하려면 char() 변환 연산자를 사용해야 한다.
    std::cout << char('A' + 32) << std::endl;
    std::cout << char('a' - 32) << std::endl;

    // 원칙적으로 문자열에 대한 산술 연산은 불능
    // 예외적으로 뺼셈은 허용
    std::cout << "hello" - "world" << std::endl;
}