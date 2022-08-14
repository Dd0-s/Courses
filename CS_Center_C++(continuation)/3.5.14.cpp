#include <algorithm>
#include <vector>

template<class Iterator>
size_t count_permutations(Iterator p, Iterator q)
{
    using T = typename std::iterator_traits<Iterator>::value_type;
    if (p == q)
        return 1;
    std::vector<T> v(p,q);
    std::sort(v.begin(), v.end());
    size_t count = 0;
    do{
        if(std::adjacent_find(v.begin(),v.end()) == v.end()) {
            ++count;
        }
    } while(std::next_permutation(v.begin(), v.end()));
    return count;
}
