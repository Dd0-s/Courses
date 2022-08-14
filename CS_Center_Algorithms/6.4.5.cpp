#include <iostream>
#include <vector>
#include <algorithm>

long count = 0;

template<typename T>
void merge(std::vector<T> &v, std::vector<T> &v1, std::vector<T> &v2) {
    auto siz1 = v1.size();
    auto siz2 = v2.size();
    size_t p1 = 0;
    size_t p2 = 0;

    while (p1 < siz1 && p2 < siz2) {
        if (v1.at(p1) <= v2.at(p2)){
            v.push_back(v1.at(p1++));
            count += static_cast<long> (p2);
        }
        else{
            v.push_back(v2.at(p2++));
        }
    }

    while (p1 < siz1){
        v.push_back(v1.at(p1++));
        count += static_cast<long> (p2);
    }
    while (p2 < siz2){
        v.push_back(v2.at(p2++));
    }
}

template<typename T>
void mergeSort(std::vector<T> &v) {
    if (v.size() <= 1)
        return;
    auto iter = v.begin() + v.size() / 2;
    std::vector<T> v1 (v.begin(), iter);
    std::vector<T> v2 (iter, v.end());

    mergeSort(v1);
    mergeSort(v2);

    v.clear();
    merge(v, v1, v2);
}

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
    mergeSort(numbers);
    std::cout << count;
    return 0;
}
