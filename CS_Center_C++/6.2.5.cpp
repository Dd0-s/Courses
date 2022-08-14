#include <cstddef>

template <typename T, typename U>
void copy_n(T* first, U* second, size_t n){
    for (size_t i = 0; i < n; ++i){
        first[i] = (T)second[i];
    }
}
