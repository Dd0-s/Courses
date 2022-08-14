#include <iostream>
#include <cmath>

int main() {
    int number;
    std::cin >> number;
    int n = 0;
    while (n * (n + 1) / 2 <= number){
        ++n;
    }
    n -= 1;
    std::cout << n << std::endl;
    for (int i = 1; i <= n; ++i){
        if (i == n){
            std::cout << i + (number - n * (n + 1) / 2);
        } else {
            std::cout << i << ' ';
        }
    }
    return 0;
}
