#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> steps (n);
    if (n == 1){
        int a;
        std::cin >> a;
        std::cout << a;
        return 0;
    }else if (n == 2){
        int a;
        std::cin >> a;
        int b;
        std::cin >> b;
        std::cout << std::max(a, 0) + b;
        return 0;
    }else {
        int a;
        std::cin >> a;
        steps[0] = a;
        int b;
        std::cin >> b;
        steps[1] = std::max(steps[0], 0) + b;
        for (int i = 2; i < n; ++i) {
            int c;
            std::cin >> c;
            steps[i] = std::max(steps[i - 1], steps[i - 2]) + c;
        }
        std::cout << steps[n - 1];
        return 0;
    }
}
