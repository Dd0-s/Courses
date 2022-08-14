#include <cstddef>

template <typename T>
class Array
{
public:
    explicit Array(size_t size, const T& value = T()) : size_(size), data_((T*) new char[size_ * sizeof(T)]){
        for (size_t i = 0; i < size_; ++i){
            new (data_ + i) T(value);
        }
    }

    Array() : size_(0), data_(0){}

    Array(const Array &obj) : size_(obj.size_), data_((T*) new char[size_ * sizeof(T)]){
        for (size_t i = 0; i < size_; ++i){
            new (data_ + i) T(obj[i]);
        }

    }

    void mem_free(){
        for (size_t i = 0; i < size_; ++i) {
            data_[i].~T();
        }
        delete [] (char *) data_;
    }

    ~Array(){
       mem_free();
    }

    Array& operator = (const Array& obj){
        if (this != &obj) {
            mem_free();
            size_ = obj.size_;
            data_ = (T*) new char[size_ * sizeof(T)];
            for (size_t i = 0; i < size_; ++i) {
                new (data_ + i) T(obj[i]);
            }
        }
        return *this;
    }

    size_t size() const {
        return size_;
    }

    T& operator[](size_t i){
        return data_[i];
    }

    const T& operator[](size_t i) const{
        return data_[i];
    }

private:
    size_t size_;
    T* data_;
};
