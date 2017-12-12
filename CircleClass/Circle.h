#pragma once
#include <string>

using namespace std;

class Circle
{
public:
	// default constructor (no-argument constructor)
	Circle();

	// constructor with initial radius parameter
	Circle(double initialRadius);
	
	// accessor member functions
	double	getRadius()			const;
	double	getDiameter()		const;
	double	getArea()			const;
	double	getCircumference()	const;
	// mutator member function
	void	setRadius(double newRadius);
	// display function
	void	displayCircleInfo(string) const;
	
private:
	// data member (private)
	double radius;
};


