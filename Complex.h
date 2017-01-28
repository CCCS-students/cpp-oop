#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

// Interface to a Complex Number implementation.
class Complex
{
public:
    // Constructors
    Complex(double a=0, double b=0); // default constructor
    
    // getters
    double a() const;
    double b() const;

    // Arithmetic Operators
    Complex operator+(const Complex & c) const;
private:
    double a_;
    double b_;
};

std::ostream & operator<<(std::ostream &, const Complex &);

#endif // ! COMPLEX_H
