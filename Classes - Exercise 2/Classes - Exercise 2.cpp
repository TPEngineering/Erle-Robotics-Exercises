// Write a program and input two integers in main and pass them to default constructor of the class. 
// Show the result of the additon of two numbers.

#include "stdafx.h"
#include <iostream>

class integers
{
public:
	integers(int x, int y) : a(x), b(y) {}
	int const integers_add() { return a + b; }
private:
	int a, b;
};

int main()
{
	integers int_pair_1 (4,5);
	std::cout << "Sum = " << int_pair_1.integers_add() << std::endl;
}