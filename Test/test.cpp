#include "gtest/gtest.h"
#include "pch.h"

using namespace std;

TEST(OpPlus, t1)
{
    complex a, b, expect;
    a.real = 2;
    a.imaginary = 1;
    b.real = 4;
    b.imaginary = 2;
    expect = a + b;
    ASSERT_DOUBLE_EQ(6, expect.real);
    ASSERT_DOUBLE_EQ(3, expect.imaginary);
}

TEST(OpMinus, t2)
{
    complex a, b, expect;
    a.real = 0.8;
    a.imaginary = 0.2;
    b.real = 0.4;
    b.imaginary = 0.1;
    expect = a - b;

    ASSERT_DOUBLE_EQ(0.4, expect.real);
    ASSERT_DOUBLE_EQ(0.1, expect.imaginary);
}

TEST(OpMulti, t3)
{
    complex a, b, expect;
    a.real = 2;
    a.imaginary = 1;
    b.real = 4;
    b.imaginary = 2;
    expect = a * b;

    ASSERT_DOUBLE_EQ(2, expect.real);
    ASSERT_DOUBLE_EQ(6, expect.imaginary);
}

TEST(OpDiv, t4)
{
    complex a, b, expect;
    a.real = 6;
    a.imaginary = 6;
    b.real = 3;
    b.imaginary = 3;
    expect = a / b;
    ASSERT_DOUBLE_EQ(7, expect.real);
    ASSERT_DOUBLE_EQ(1, expect.imaginary);
}

TEST(OpMinusAndMulti, t5)
{
    complex num1 = { 3, 4 };
    complex a, b, expect;
    a.real = 2;
    a.imaginary = 3;
    b.real = 1;
    b.imaginary = 6;
    expect = a - b * a;
    ASSERT_DOUBLE_EQ(2, expect.real);
    ASSERT_DOUBLE_EQ(0, expect.imaginary);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}