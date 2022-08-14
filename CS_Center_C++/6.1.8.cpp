struct ICloneable
{
	virtual ICloneable* clone() const = 0;
	virtual ~ICloneable() { }
};

template <typename T>
struct ValueHolder : ICloneable {

    ValueHolder(T value) : data_(value) {};

    ValueHolder* clone() const {
        return new ValueHolder(*this);
    }

    ~ValueHolder() {}

    T data_;
};
