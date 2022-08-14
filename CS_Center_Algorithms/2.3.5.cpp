#include <cassert>
#include <cstdint>
#include <iostream>

template <class Int>
Int gcd(Int a, Int b) {
    if (a == 0 || b == 0){
        return a + b;
    } else if (a > b) {
        gcd(a % b, b);
    } else {
        gcd(a, b % a);
    }
}

int main(void) {
    std::int32_t a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << std::endl;
    return 0;
}
