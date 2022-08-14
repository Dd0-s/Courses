template <typename T, typename V>
struct SameType{
    static const bool value = false; 
};

template <typename W>
struct SameType<W, W>{
    static const bool value = true;
};
