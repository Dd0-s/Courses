#include <utility>

template<typename F, typename ...Args>
auto apply(F f, Args&&... args) -> decltype(f(std::forward<Args>(args)...)) {
  return f(std::forward<Args>(args)...);
}
