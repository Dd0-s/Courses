#include <typeinfo>

bool check_equals(Expression const *left, Expression const *right)
{
    if(typeid(*left) == typeid(*right)){
        return true;
    }else{
        return false;
    }
}
