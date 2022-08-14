#include <cassert>
#include <iostream>

class Fibonacci final {
public:
    static int get_last_digit(int n) {
        assert(n >= 1);
        int a = 0;
        int b = 1;
        int c;
        for (int i = 0; i < n - 1; i++){
            c = (a + b) % 10;
            a = b;
            b = c;
        }
        return b;
    }
};

int main(void) {
  int n;
  std::cin >> n;
  std::cout << Fibonacci::get_last_digit(n) << std::endl;
  return 0;
}
