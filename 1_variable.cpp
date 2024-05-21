#include <iostream>

int main()
{
    // 변수 생성 방법 : type 변수명
    int i;
    double d;
    char c;
    std::string s;
    bool bl;

    int x, y, z;
    x = y = z = 10;

    int a = 5, b = 3;
    std::cout << a + b << std::endl; // -> std::cout << 5 + 3 << std::endl; -> std:: cout << 8 << std::endl;

    int age = 0;
    std::cout << age << std::endl;

    age = age + 1; // -> age = 0 + 1; -> age = 1; 대입연산자는 우선순위가 낮다?
    std::cout << age << std::endl;

    age += 1;
    std::cout << age << std::endl;

    ++age;
    std::cout << age << std::endl;

    x = 0;
    y = ++x; // 변수를 1 증가시킨 뒤 사용 -> x +=1, y = x
    std::cout << x << ", " << y << std::endl;

    x = 0;
    y = x++; // 변수를 사용한 후에 1 증가시킴 -> y = x, x += 1
    std::cout << x << ", " << y << std::endl;

    // 상수
    const double PI = 3.141592; // 관례적으로 상수는 대문자로 쓴다
    double r = 1.1;

    // pi = 3.131592 -> 상수로 만들면 값을 수정할 수 없음
    std::cout << PI * r * r << std::endl;
}