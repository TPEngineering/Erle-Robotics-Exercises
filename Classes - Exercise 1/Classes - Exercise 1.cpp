/* 
https://erlerobotics.gitbooks.io/erle-robotics-cpp-gitbook/classes_and_structs/exercises_classes.html

Write a class having two private variables and one member function which will return the area of the rectangle.
*/

#include "stdafx.h"
#include <iostream>

// Extra comment for testing
class rectangle
{	
public:
	void const set_values(const int, const int);
	int const find_area();

private:
	int length, width;
};

void const rectangle::set_values(int x, int y)
{
	width = x;
	length = y;
}

int const rectangle::find_area()
{
	return width * length;
}

int main()
{
	rectangle rect1;
	rect1.set_values(5, 6);
	std::cout << "area: " << rect1.find_area();
	return 0;
}