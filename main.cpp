#include <iostream>
#include <gmpxx.h>

int main() {
    // 初始化两个大数
    mpz_class a, b, c;

    // 赋值操作，使用字符串形式
    a = "123456789012345678901234567890"; // 非常大的数
    b = "987654321098765432109876543210";

    // 进行加法运算
    c = a + b;
    std::cout << "Sum: " << c << std::endl;

    // 进行乘法运算
    c = a * b;
    std::cout << "Product: " << c << std::endl;

    // 进行除法运算
    c = a / b;
    std::cout << "Quotient: " << c << std::endl;

    // 进行模运算
    c = a % b;
    std::cout << "Modulus: " << c << std::endl;

    // // 进行幂运算
    // c = a.powm(b, 10); // a 的 b 次幂模 10
    // std::cout << "Power Modulo: " << c << std::endl;
    return 0;
}
