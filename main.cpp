#include <iostream>
#include <gmpxx.h>

int main() {
    // 初始化两个大数
    mpz_class a, b, c;

    // 赋值操作，使用字符串形式
    a = "123456789012345678901234567890"; // 非常大的数
    b = "987654321098765432109876543210";

    c = a * b;
    std::cout << "Product: " << c << std::endl;

    // 进行除法运算
    c = a / b;
    std::cout << "Quotient: " << c << std::endl;

    return 0;
}
