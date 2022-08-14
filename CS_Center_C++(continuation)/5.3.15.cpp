template <typename IL1, typename IL2, template <int, int> class Fun>
struct Zip;

template <int... Vals1, int... Vals2, template <int, int> class Fun>
struct Zip<IntList<Vals1...>, IntList<Vals2...>, Fun> {
    using type = IntList<Fun<Vals1, Vals2>::value...>;
};
