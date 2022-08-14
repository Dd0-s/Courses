#include <ostream>
#include <typeinfo>

void print_values(std::ostream& os) {};

template<typename T, typename... Args>
void print_values(std::ostream& os, T value, const Args&... args) {
    os << typeid(value).name() << ": " << value << "\n";
    print_values(os, args...);
};
