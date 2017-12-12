// CircleClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Circle.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	Circle circle01;
	Circle circle02(5.7);
	Circle circle03;
	Circle circle04;

	cout << endl;
	circle01.displayCircleInfo("circle01");

	circle02.displayCircleInfo("circle02");

	circle03.setRadius(9.75);
	circle03.displayCircleInfo("circle03");

	circle04 = circle02;
	circle04.displayCircleInfo("circle04");

	/*cout << endl << fixed << setw(6) << setprecision(2);
	cout << "circle01 - Radius:  " << circle01.getRadius() << "   Diameter:  " << setw(6) << circle01.getDiameter()
		<< "   Area:  " << setw(6) << circle01.getArea() << endl;
	
	cout << endl;
	cout << "circle02 - Radius:  " << circle02.getRadius() << "   Diameter:  " << setw(6) << circle02.getDiameter()
		<< "   Area:  " << setw(6) << circle02.getArea() << endl;

	circle01.setRadius(3.75);
	cout << endl;
	cout << "circle01 - Radius:  " << circle01.getRadius() << "   Diameter:  " << circle01.getDiameter() 
		<< "   Area:  " << circle01.getArea() << endl;
	
	circle02 = circle01;
	cout << endl;
	cout << "circle02 - Radius:  " << circle02.getRadius() << "   Diameter:  " << circle02.getDiameter() 
		<< "   Area:  " << circle02.getArea() << endl;*/
		
	
	cout << endl;
	system("pause");
	return 0;
}

