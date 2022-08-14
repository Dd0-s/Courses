struct Expression;
struct Number;
struct BinaryOperation;

struct ScopedPtr
{

private:
    ScopedPtr(const ScopedPtr&);
    ScopedPtr& operator=(const ScopedPtr&);

    Expression *ptr_;
};
