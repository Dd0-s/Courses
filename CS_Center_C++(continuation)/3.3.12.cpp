#include <typeindex>
#include <functional>
#include <map>
#include <cstdint>
#include <iostream>

template<typename Base, typename Result, bool Commutative>
struct Multimethod2 {

    using Foo = std::function<Result (Base*, Base*)>;
    typedef std::type_index index;

    void addImpl(index const& t1, index const& t2, Foo f) {
        index i1(t1);
        index i2(t2);
        std::pair<index, index> i = {i1, i2};
        auto iter = m.find(std::make_pair(i1, i2));
        if (iter == m.end()) {
            m.emplace(i,  f);
        }
    }

    bool hasImpl(Base * a, Base * b) const {
        index i1(typeid(*a));
        index i2(typeid(*b));
        auto iter1 = m.find(std::make_pair(i1, i2));
        auto iter2 = m.find(std::make_pair(i2, i1));
        if (iter1 != m.end()) {
            return true;
        } else if (iter2 != m.end() && Commutative){
            return true;    
        }
        return false;
    }

    Result call(Base* a, Base* b) const {
        index i1(typeid(*a));
        index i2(typeid(*b));
        auto iter1 = m.find(std::make_pair(i1, i2));
        auto iter2 = m.find(std::make_pair(i2, i1));
        if (iter1 != m.end()) {
            return iter1->second(a, b);
        }else if (iter2 != m.end() && Commutative){
            return iter2->second(b,a);
        }
    }

private:
    std::map<std::pair<index, index>, Foo> m;
};
