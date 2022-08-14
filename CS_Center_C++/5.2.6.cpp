struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);

    void neg();
    void inv();
    double to_double() const;

    int get_num() const{
        return numerator_;
    }

    int get_den() const{
        return denominator_;
    }
    
    Rational& operator+=(Rational rational);
    Rational& operator-=(Rational rational);
    Rational& operator*=(Rational rational);
    Rational& operator/=(Rational rational);

    Rational operator-() const;
    Rational operator+() const;

private:
    int numerator_;
    int denominator_;
};

Rational operator+(Rational lhs, Rational rhs);
Rational operator-(Rational lhs, Rational rhs);
Rational operator*(Rational lhs, Rational rhs);
Rational operator/(Rational lhs, Rational rhs);

bool operator == (const Rational &a, const Rational &b) {
    return (a.get_num() * b.get_den() - b.get_num() * a.get_den() == 0);
}
bool operator != (const Rational &a, const Rational &b) {
    return !(a == b);
}
bool operator < (const Rational &a, const Rational &b) {
    return (a.get_num() * b.get_den() - b.get_num() * a.get_den() < 0);
}
bool operator > (const Rational &a, const Rational &b) {
    return (b < a);
}
bool operator >= (const Rational &a, const Rational &b) {
    return !(a < b);
}
bool operator <= (const Rational &a, const Rational &b) {
    return !(a > b);
}
