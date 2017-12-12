#include "stdafx.h"
#include "Circle.h"
#include <iostream>
#include <iomanip>

const double PI = 3.14159;

Circle::Circle()

// default constructor (no-argument constructor)
{
	radius = 1.0;
}

// constructor with initial radius parameter
Circle::Circle(double initialRadius)
{
	radius = initialRadius;
}

// accessor member functions
double	Circle::getRadius()		const
{
	return radius;
}
double	Circle::getDiameter()	const
{
	return radius * 2.0;
}
double	Circle::getArea()		const
{
	return radius * radius * PI;
}
double	Circle::getCircumference()	const
{
	return 2 * radius * PI;
}

// mutator member function
void	Circle::setRadius(double newRadius)
{
	radius = newRadius;
}

// display function
void	Circle::displayCircleInfo(string circleName) const
{

	
	cout << fixed << setprecision(2);
	cout << circleName << ":  Radius -" << setw(8) << getRadius() << "   Diameter      -" << setw(8) << getDiameter() << endl
		<< "           Area   -" << setw(8) << getArea() << "   Circumference -" << setw(8) << getCircumference() << endl << endl;
	
}

	