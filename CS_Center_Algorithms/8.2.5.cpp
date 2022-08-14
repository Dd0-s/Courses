#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> numbers (n);
    for (int i = 0; i < n; ++i){
        int a;
        std::cin >> a;
        numbers[i] = a;
    }
    std::vector<int> din (n);
    din[0] = 1;
    for (int i = 0; i < n; ++i){
        int max = -1;
        for (int j = 0; j < i; ++j){
            if (numbers[i] % numbers[j] == 0 && din[j] > max){
                max = din[j];
            }
        }
        if (max == -1){
            din[i] = 1;
        }else{
            din[i] = max + 1;
        }
    }
    std::cout << *max_element(std::begin(din), std::end(din));
    return 0;
}
