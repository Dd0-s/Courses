struct Expression;
struct Number;
struct BinaryOperation;

struct SharedPtr
{
    explicit SharedPtr(Expression *ptr = 0){
        ptr_ = ptr;
        if (ptr_) {
            counter_ = new int(1);
        } else {
            counter_ = 0;
        }
    }

    void dec_counter(){
        if (counter_ && ptr_ && !--(*counter_)) {
            delete ptr_;
            delete counter_;
            counter_ = 0;
        }
    }

    ~SharedPtr(){
        dec_counter();
    }

    SharedPtr(const SharedPtr& obj) : ptr_(obj.ptr_){
        counter_ = obj.counter_;
        if (ptr_){
            ++(*counter_);
        }
    }

    SharedPtr& operator = (const SharedPtr& obj){
        if (this != &obj){
            dec_counter();
            ptr_ = obj.ptr_;
            counter_ = obj.counter_;
            if (obj.ptr_) {
                ++(*counter_);
            }
        }
        return *this;
    }

    Expression* get() const {return ptr_; }

    void reset(Expression *ptr = 0){
        if (ptr_ != ptr){
            dec_counter();
            ptr_ = ptr;
            if (ptr) {
                counter_ = new int(0);
                if (ptr_) {
                    ++(*counter_);
                }
            }
        }
    }

    Expression& operator*() const {return *ptr_; }
    Expression* operator->() const {return ptr_; }

private:
    Expression *ptr_;
    int *counter_;
};
