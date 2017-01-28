#include <iostream>

#include "Complex.h"

int main()
{
    Complex c;
    Complex d(5.0, 3.7);

    std::cout << c << ' ' << d << ' ' << c + d << std::endl;
    
    return 0;
}
