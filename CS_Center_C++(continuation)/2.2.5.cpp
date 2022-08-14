template<class T>
struct Array
{
    explicit Array(size_t size = 0);
    Array(Array const& a);
    Array & operator=(Array const& a);
    ~Array();

    size_t size() const;
    T &         operator[](size_t i);
    T const&    operator[](size_t i) const;

    Array(Array<T>&& other) : size_(other.size_), data_(other.data_) {
        other.data_ = nullptr;
        other.size_ = 0;
    }

    Array<T>& operator = (Array<T>&& other) {
        if (this != &other) {
            std::swap(data_, other.data_);
            std::swap(size_, other.size_);
        }
        return *this;
    }

private:    
    size_t  size_;
    T *     data_;    
};
