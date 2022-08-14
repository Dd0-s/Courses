unsigned gcd(unsigned a, unsigned b)
{
    if (a == 0 || b == 0){
        return a + b;
    } else if (a > b){
        return gcd(a % b, b);
    } else {
        return gcd(a, b % a);
    }
}
