struct ICloneable;
template <typename T>
struct ValueHolder;

class Any{
public:
    Any() : ptr(0) {}

    Any(const Any & other){
        if(other.ptr){
            ptr = other.ptr->clone();
        }else {
            ptr = 0;
        }
    }

    template<typename T>
    Any(const T val) : ptr(new ValueHolder<T>(val)) {}

    ~Any() {
        delete ptr;
    }

    Any& operator = (const Any & other) {
        if(this != &other) {
            delete ptr;
            if(other.ptr){
                ptr = other.ptr->clone();
            }else {
                ptr = 0;
            }
        }

        return *this;
    }

    template<typename T>
    Any & operator = (const T & val) {
        delete ptr;
        ptr = new ValueHolder<T>(val);
        return *this;
    }

    template<typename T>
    T * cast() {
        if(ptr != 0){
            ValueHolder<T>* pvh = dynamic_cast<ValueHolder<T>*>(ptr);
            if(pvh != 0){
                return &(pvh->data_);
            }
        }
        return 0;
    }
    
private:
    ICloneable * ptr;
};
