#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int W;
    std::cin >> W;
    int n;
    std::cin >> n;
    std::vector<int> m (n);
    for (int i = 0; i < n; ++i){
        int a;
        std::cin >> a;
        m[i] = a;
    }
    std::vector<std::vector<int>> matrix (W + 1, std::vector<int> (n + 1));
    for (int i = 0; i < W + 1; ++i){
        matrix[i][0] = 0;
    }
    for (int i = 0; i < n + 1; ++i){
        matrix[0][i] = 0;
    }
    for (int j = 1; j < n + 1; ++j){
        for (int i = 1; i < W + 1; ++i){
            if (i - m[j - 1] >= 0){
                matrix[i][j] = std::max(matrix[i - m[j - 1]][j - 1] + m[j - 1], matrix[i][j - 1]);
            }else{
                matrix[i][j] = matrix[i][j - 1];
            }
        }
    }
    std::cout << matrix[W][n];
    return 0;
}
