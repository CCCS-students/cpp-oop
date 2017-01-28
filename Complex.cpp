#include "Complex.h"

std::ostream & operator<<(std::ostream & cout, const Complex & c)
{
    cout << '<' << c.a() << " + " << c.b() << "i" << '>';

    return cout;
}

Complex::Complex(double a, double b)
    : a_(a), b_(b)
{
}


double Complex::a() const
{
    return a_;
}

double Complex::b() const
{
    return b_;
}

Complex Complex::operator+(const Complex & c) const
{

    return Complex(a_ + c.a_, b_+ c.b_);

    // Complex temp;
    // temp.a_ = a_ + c.a_;
    // temp.b_ = b_ + c.b_;
    // return temp;
}

// Complex & Complex::operator+=(
