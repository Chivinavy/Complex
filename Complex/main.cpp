#include <iostream>
#include "complex.h"

using namespace std;

int main() {

	complex a, b;

	a.real = 2;
	a.imaginary = 2;
	b.real = 3;
	b.imaginary = 0;

	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;



	return 0;

}