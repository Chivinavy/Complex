//
// pch.h
// Header for standard system include files.
//

#pragma once

#include "gtest/gtest.h"

struct complex {
    double real; // �������������� �����
    double imaginary; // ������ �����
};

complex operator+ (complex a, complex b);

complex operator- (complex a, complex b);

complex operator / (complex& a, complex& b);

complex operator* (complex a, complex b);
