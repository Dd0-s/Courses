#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

#include <iostream>
using std::cout;
using std::endl;

template<class T>
class VectorList {
private:
    using VectT = std::vector<T>;
    using ListT = std::list<VectT>;

public:
    using value_type = T;

    VectorList() = default;
    VectorList(VectorList const&) = default;
    VectorList(VectorList&&) = default;

    VectorList& operator=(VectorList&&) = default;
    VectorList& operator=(VectorList const&) = default;

    template<class It>
    void append(It p, It q);

    bool empty() const{
        return size() == 0;
    }

    size_t size() const {
        size_t res = 0;
        for (const auto& v : data_)
            res += v.size();
        return res;
    }

        struct const_iterator {

        using iterator_category = std::bidirectional_iterator_tag;
        using difference_type   = int;
        using value_type        = const T;
        using pointer           = const T*;
        using reference         = const T&;

        const_iterator() = default;
        explicit const_iterator(const ListT* r) : listPtr(r){}
        const_iterator(typename VectT::const_iterator v, typename ListT::const_iterator l, const ListT* r):listPtr(r), currVec(l), currItem(v)  {}

        const_iterator(const const_iterator& op2) = default;
        const_iterator(const_iterator&& op2) = default;

        const_iterator& operator = (const const_iterator& op2) = default;
        const_iterator& operator = (const_iterator&& op2) = default;
        
        const_iterator& operator++() {
            if (currItem != currVec->end())
                ++currItem;

            if (currItem == currVec->end() && currVec != std::prev(listPtr->end())) {
                ++currVec;

                if (currVec != listPtr->end())
                    currItem = currVec->begin();
            }

            return *this;
        }

        const_iterator operator++(int) {
            const_iterator r(*this);
            ++(*this);
            return r;
        }

        const_iterator& operator--() {
            if (currItem == currVec->begin()){

                if (currVec != listPtr->begin()){
                    currVec=std::prev(currVec);
                    currItem = --currVec->end();
                }
            } else --currItem;

            return *this;
        }

        const_iterator operator--(int) {
            const_iterator r(*this);
            --(*this);
            return r;
        }

        reference operator*() const {
            return *currItem;
        }

        pointer operator->() const {
            return &(*currItem);
        }

        bool operator==(const const_iterator& op2) const {
            return currVec == op2.currVec && currItem == op2.currItem;
        }

        bool operator!=(const const_iterator& op2) const {
            return currVec != op2.currVec || currItem != op2.currItem;
        }

        typename ListT::const_iterator currVec;
        typename VectT::const_iterator currItem;
        const ListT* listPtr;
    };

    using const_reverse_iterator = std::reverse_iterator<const_iterator>;

    const_iterator begin() const {
        if (data_.empty()){
            return const_iterator(&data_);
        }

        return const_iterator(data_.begin()->begin(), data_.begin(), &data_);
    }

    const_iterator end() const {
        if (data_.empty()){
            return const_iterator(&data_);
        }

        return const_iterator((--data_.end())->end(), --data_.end(), &data_);
    }

    const_reverse_iterator rbegin() const {
        return const_reverse_iterator(end());
    }

    const_reverse_iterator rend() const {
        return const_reverse_iterator(begin());
    }

private:
    ListT data_;
};
