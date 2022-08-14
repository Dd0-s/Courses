template <int H, typename TL>
struct IntCons;

template <int H, int... Vals>
struct IntCons <H, IntList<Vals...>> {
    using type = IntList<H, Vals...>;
};

template <int N, int K = 0>
struct Generate {
    using type = typename IntCons<K, typename Generate<N - 1, K + 1>::type>::type;
};

template <int K>
struct Generate<0, K> {
    using type = IntList<>;
};
