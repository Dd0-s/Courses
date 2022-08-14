struct Expression{
public:
    virtual double evaluate() const = 0;
    virtual ~Expression() = default;
};

struct Number : Expression{
public:
    explicit Number(double value) : value(value) {};
    virtual ~Number() {};
    virtual double evaluate() const{
        return value;
    }

private:
    double value;
};

struct BinaryOperation : Expression
{
public:
    BinaryOperation(Expression const * left, char op, Expression const * right) : left(left), op(op), right(right) { }
    virtual ~BinaryOperation(){
        delete left;
        delete right;
    }
    virtual double evaluate() const {
        if (op == '+') {
            return (left->evaluate() + right->evaluate());
        } else if (op == '-') {
            return (left->evaluate() - right->evaluate());
        } else if (op == '*') {
            return (left->evaluate() * right->evaluate());
        } else if (op == '/') {
            return (left->evaluate() / right->evaluate());
        }
       return 0;
    };

private:
    Expression const * left;
    Expression const * right;
    char op;
};
