#include <iostream>
#include <vector>

int check (std::vector<int>& numbers, int in, int start, int end){
    if (start == end){
        return -2;
    }else if (numbers[(start + end) / 2] == in){
        return (start + end) / 2;
    }else if (numbers[(start + end) / 2] > in){
        return check(numbers, in, start, (start + end) / 2);
    }else{
        return check(numbers, in, (start + end) / 2 + 1, end);
    }
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers (n);
    for (int i = 0; i < n; ++i){
        int in;
        std::cin >> in;
        numbers[i] = in;
    }
    int k;
    std::cin >> k;
    for (int i = 0; i < k; ++i){
        int in;
        std::cin >> in;
        std::cout << check(numbers, in, 0, n) + 1 << ' ';
    }
    return 0;
}
