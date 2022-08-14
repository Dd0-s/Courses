#include <utility> // std::declval
#include<type_traits>

template<class T>
void do_math() noexcept(noexcept(std::declval<T>() + std::declval<T>())
                        && std::is_nothrow_move_constructible<T>::value
                        && std::is_nothrow_move_assignable<T>::value
                        && std::is_nothrow_copy_constructible<T>::value
                        && std::is_nothrow_copy_assignable<T>::value)
                        {

}
