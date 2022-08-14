#include <iostream>
#include <vector>
#include <algorithm>

int check_right(std::vector<int>& begin, int point) {
    int l = -1;
    int r = static_cast<int> (begin.size());
    while (l < r - 1) {
        int m = (l + r) / 2;
        if (begin[m] <= point) {
            l = m;
        }else {
            r = m;
        }
    }
    return l;
}

int check_left(std::vector<int>& begin, int point) {
    int l = -1;
    int r = static_cast<int> (begin.size());
    while (l < r - 1) {
        int m = (l + r) / 2;
        if (begin[m] < point) {
            l = m;
        }else {
            r = m;
        }
    }
    return r;
}

int main()
{
    int n;
    std::cin >> n;
    int m;
    std::cin >> m;
    std::vector<int> begin (n);
    std::vector<int> end (n);
    for (int i = 0; i < n; ++i){
        int a;
        std::cin >> a;
        begin[i] = a;
        int b;
        std::cin >> b;
        end[i] = b;
    }
    sort(begin.begin(), begin.end());
    sort(end.begin(), end.end());
    for (int i = 0; i < m; ++i){
        int point;
        std::cin >> point;
        int start;
        start = check_right(begin, point);
        int finish;
        finish = check_left(end, point);
        std::cout << start + 1 - finish << ' ';
    }
    return 0;
}
