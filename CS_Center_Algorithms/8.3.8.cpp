#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::string s1;
    std::cin >> s1;
    int len_s1 = static_cast<int> (s1.size());
    std::string s2;
    std::cin >> s2;
    int len_s2 = static_cast<int> (s2.size());
    std::vector<std::vector<int>> matrix(len_s1 + 1, std::vector<int>(len_s2 + 1));
    int count = 0;
    for (int i = 0; i < len_s1 + 1; ++i){
        matrix[i][0] = count;
        ++count;
    }
    count = 0;
    for (int i = 0; i < len_s2 + 1; ++i){
        matrix[0][i] = count;
        ++count;
    }
    for (int i = 1; i < len_s1 + 1; ++i){
        for (int j = 1; j < len_s2 + 1; ++j){
            int dist = 1;
            if (s1[i - 1] == s2[j - 1]){
                dist = 0;
            }
            matrix[i][j] = std::min(std::min(matrix[i - 1][j] + 1, matrix[i][j - 1] + 1), matrix[i - 1][j - 1] + dist);
        }
    }
    std::cout << matrix[len_s1][len_s2];
    return 0;
}
