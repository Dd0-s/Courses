#include <cassert>
#include <iostream>

class Fibonacci final {
public:
    static int get(int n) {
        assert(n >= 0);
        if (n == 0 || n == 1){
            return n;
        } else{
            return get(n - 1) + get(n - 2);
        }
    }
};

int main(void) {
  int n;
  std::cin >> n;
  std::cout << Fibonacci::get(n) << std::endl;
  return 0;
}
