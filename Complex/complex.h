
#pragma once

#include <iosfwd>

struct complex {
    double real; // действительная часть
    double imaginary; // мнимая часть
};

complex operator+ (complex a, complex b);
void operator+= (complex& a, complex b);

complex operator- (complex a, complex b);
void operator-= (complex& a, complex b);

complex operator / (complex& a, complex& b);
void operator/= (complex& a, complex b);

complex operator* (complex a, complex b);
void operator*= (complex& a, complex b);


std::ostream & operator<< (std::ostream & out, complex a); 
