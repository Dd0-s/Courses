bool check_equals(Expression const *left, Expression const *right)
{
    return (*((size_t*)right) == *((size_t*)left));
}
