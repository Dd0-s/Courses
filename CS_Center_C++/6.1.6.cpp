#include <cstddef>

template <typename T>
class Array
{
public:
    explicit Array(size_t size = 0, const T& value = T()) : size_(size), data_(new T[size_]){
        for (size_t i = 0; i < size_; ++i){
            data_[i] = value;
        }
    }

    explicit Array(const Array &obj) : size_(obj.size_), data_(new T[size_]){
        for (size_t i = 0; i < size_; ++i){
            data_[i] = obj.data_[i];
        }

    }

    ~Array(){
        delete[] data_;
    }

    Array& operator = (const Array & obj){
        if (this != &obj) {
            delete [] data_;
            size_ = obj.size_;
            data_ = new T[size_];
            for (size_t i = 0; i != size_; ++i) {
                data_[i] = obj.data_[i];
            }
        }
        return *this;
    }

    size_t size() const {
        return size_;
    }

    T& operator[](size_t i ){
        return data_[i];
    }

    const T& operator[](size_t i) const{
        return data_[i];
    }

private:
    size_t size_;
    T* data_;
};
