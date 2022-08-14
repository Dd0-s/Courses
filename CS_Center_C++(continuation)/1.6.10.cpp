template<class T, class M>
bool compare(T const& o1, T const& o2, M (T::*method)() const)
{
    return (o1.*method)() < (o2.*method)();
}
