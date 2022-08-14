template <typename TL>
struct Length {
    static constexpr std::size_t value = 1 + Length<typename TL::Tail>::value;
};

template <>
struct Length<IntList<>> {
    static constexpr std::size_t value = 0;
};
