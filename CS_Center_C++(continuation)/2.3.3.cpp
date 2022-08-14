#include <tuple>

template<size_t R, size_t U, class...Args>
auto to_pair(const std::tuple<Args...> t) -> decltype(std::make_pair(std::get<R>(t), std::get<U>(t))) {
    return std::make_pair(std::get<R>(t), std::get<U>(t));
};
