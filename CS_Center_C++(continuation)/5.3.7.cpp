template <int... Vals>
struct IntList;

template <int H, int... T>
struct IntList<H, T...> {
    static constexpr int Head{H};
    using Tail = IntList<T...>;
};

template <>
struct IntList<> {};
