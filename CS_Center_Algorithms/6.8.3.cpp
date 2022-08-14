#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> numbers (10);
    for (int i = 0; i < n; ++i){
        int a;
        std::cin >> a;
        numbers[a - 1] += 1;
    }
    for (int i = 0; i < 10; ++i){
        for (int j = 0; j < numbers[i]; ++j){
            std::cout << i + 1 << ' ';
        }
    }
    return 0;
}
