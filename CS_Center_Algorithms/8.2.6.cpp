#include <iostream>
#include <vector>

long binsearch_reverse(std::vector<long>& numbers, long number) {
    long n = static_cast<int> (numbers.size());
    long l = 0;
    long r = n;
    long m;
    while (l < r) {
        m = (l + r) / 2;
        if (number < numbers[m])
            l = m + 1;
        else
            r = m;
    }
    if (number == numbers[l])
        while (number == numbers[l])
            l++;
    return l;
}

void get_subsequence(const std::vector<long> &numbers) {
    long n = static_cast<int> (numbers.size());
    long mxj = -1;
    std::vector<long> vals (n + 1);
    std::vector<long> val_inds (n + 1);
    std::vector<long> num_inds (n + 1);
    vals[0] = 1e9;
    num_inds[0] = -1;
    for (long i = 1; i < n + 1; ++i){
        vals[i] = -1e9;
        num_inds[i] = -1;
    }
    for (long i = 0; i < n; i++) {
        long j = static_cast<long> (binsearch_reverse(vals, numbers[i]));
        if (vals[j - 1] >= numbers[i] && numbers[i] > vals[j]) {
            vals[j] = numbers[i];
            val_inds[j] = i;
            num_inds[i] = val_inds[j - 1];
            if (j > mxj)
                mxj = j;
        }
    }
    std::cout << mxj << std::endl;
    vals[0] = val_inds[mxj];
    long j = mxj;
    long i = 0;
    j = val_inds[j];
    do {
        vals[++i] = j;
        j = num_inds[j];
    } while (j != 0);
    vals[++i] = j;
    for (j = mxj; j >= 1; j--)
        std::cout << vals[j] + 1 << ' ';
}

int main() {
    long number_count;
    std::cin >> number_count;
    std::vector<long> numbers (number_count);
    for (auto& number : numbers) {
        std::cin >> number;
    }
    get_subsequence(numbers);
    return 0;
}
