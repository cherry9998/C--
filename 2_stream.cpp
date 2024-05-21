#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::cout << 100 << std::endl;
    std::cout << 3.14 << std::endl;
    std::cout << 'A' << std::endl;
    std::cout << 'hello' << std::endl;
    std::cout << true << std::endl;

    std::cout << 3.14 << " " << 100 << std::endl;

    // cout은 기본적으로 소수점 이하 6자리까지만 출력하고 그 이상인 경우 반올림하여 근사
    std::cout << 0.123456789 << std::endl;
    // 소수점 이하 자릿수를 조절하고 싶다면
    std::cout << std::setprecision(9); // 조작자
    std::cout << 0.123456789 << std::endl;

    // 실수에 대하여 지수 표기법으로 출력하고 싶다면
    // std::cout << std::scientific;
    std::cout << 0.123456789 << std::endl;

    // 정렬 - default는 오른쪽
    std::cout << '|' << std::setw(8) << 'A' << '|' << std::endl;
    std::cout << '|' << std::setw(8) << std::left << 'A' << '|' << std::endl;
    std::cout << '|' << std::setw(8) << std::right << 'A' << '|' << std::endl;

    // 입력
    /*
    std::cout << "input name : ";
    std::string name;
    std::cin >> name;

    std::cout << "input age : ";
    int age;
    std::cin >> age;

    std::cout << name << ", " << age << std::endl;
    */

    // 연습문제 1 : 사용자로부터 원의 반지름을 입력 받아 그 넓이를 출력하는 프로그램
    /*
    const double PI = 3.14;
    std::cout << "input radius : ";
    double r;
    std::cin >> r;
    std::cout << "answer : " << r * r * PI << std::endl;
    */

    // 연습문제 2 : 사용자부터 1 이상의 자연수를 입력 받아 짝수면 true 홀수면 false를 출력하는 프로그램
    /*
    std::cout << "자연수를 입력하세요 (1 이상 1000 이하의 자연수) : ";
    int n;
    std::cin >> n;
    bool ans = ((n % 2) == 0);
    std::cout << std::boolalpha << "answer : " << ans << std::endl;
    */

    std::cout << "input full name : ";
    std::string name;
    std::getline(std::cin, name); // std;:cin >> name;
    std::cout << name << std::endl;

    // 입력을 받을 때는 변수의 타입과 동일한 값으로 줘야 한다
    // 다른 값을 입력하게 되면 올바르게 동작하지 않을 수 있다.
}