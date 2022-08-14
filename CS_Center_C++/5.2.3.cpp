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

    Rational & operator += (Rational const & a) { add(a); return *this; }
    Rational & operator -= (Rational const & a) { sub(a); return *this; }
    Rational & operator *= (Rational const & a) { mul(a); return *this; }
    Rational & operator /= (Rational const & a) { div(a); return *this; }

    Rational operator - () const { return Rational(-numerator_, denominator_); }
    Rational operator + () const { return Rational(*this); }
    
private:
    int numerator_;
    int denominator_;
};
