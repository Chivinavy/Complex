#include <iostream>
#include "complex.h"
#include <cmath>

using namespace std;

complex operator+ (complex a, complex b) {
    complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void operator+= (complex& a, complex b) {
    a = a + b;
}

complex operator- (complex a, complex b) {
    complex sub;
    sub.real = a.real - b.real;
    sub.imaginary = a.imaginary - b.imaginary;
    return sub;
}

void operator-= (complex& a, complex b) {
    a = a - b;
}

complex operator* (complex a, complex b) {
    complex proiz;
    proiz.real = a.real * b.real - a.imaginary * b.imaginary;
    proiz.imaginary = a.real * b.imaginary + a.imaginary * b.real;
    proiz.real = round(proiz.real * 100) / 100;
    proiz.imaginary = round(proiz.imaginary * 100) / 100;
    return proiz;
}

void operator*= (complex& a, complex b) {
    a = a * b;
}

complex operator / ( complex& a, complex& b)
{
    if (b.real != 0 && b.imaginary != 0) {
        complex result;
        result.real = (a.real * b.real + a.imaginary * b.imaginary) /
            (b.real * b.real + b.imaginary * b.imaginary);
        result.imaginary = (b.real * a.imaginary - b.imaginary * a.real) /
            (b.real * b.real + b.imaginary * b.imaginary);
        result.real = std::round(result.real * 100) / 100;
        result.imaginary = std::round(result.imaginary * 100) / 100;
        return result;
    }
    else
    {
        printf ("Ошибка. Деление на ноль");
    }
        
}

void operator/= (complex& a, complex b) {
    a = a / b;
}

ostream& operator<< (ostream& out, complex a) {
    bool flag = false;
    if (a.real != 0) {
        out << a.real;
        flag = true;
    }

    if (a.imaginary < 0) {
        out << a.imaginary << "i";
    }
    else if (a.imaginary > 0) {
        if (flag) {
            out << "+";
        }
        out << a.imaginary << "i";
    }
    else if (a.real == 0 && a.imaginary == 0) {
        out << "0";
    }
    return out;
}