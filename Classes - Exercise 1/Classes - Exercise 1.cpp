/* 
https://erlerobotics.gitbooks.io/erle-robotics-cpp-gitbook/classes_and_structs/exercises_classes.html

Write a class having two private variables and one member function which will return the area of the rectangle.
*/

#include "stdafx.h"
#include <iostream>

// this is a random comment
class rectangle
{	
public:
	void set_values(int, int);
	int findarea();

private:
	int length, width;
};

void rectangle::set_values(int x, int y)
{
	width = x;
	length = y;
}

int rectangle::findarea()
{
	return width * length;
}

int main()
{
	rectangle rect1;
	rect1.set_values(5, 6);
	std::cout << "area: " << rect1.findarea();
	return 0;
}