#include "Point.h"
#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

void Point::setPointX(float x_p)
{
	x = x_p;
}

void Point::setPointY(float y_p)
{
	y = y_p;
}

void Point::setPointZ(float z_p)
{
	z = z_p;
}

float Point::getPointX()
{
	return 0.0f;
}

float Point::getPointY()
{
	return 0.0f;
}

float Point::getPointZ()
{
	return 0.0f;
}

void Point::PrintPoint()
{
	ofstream out;
	out.open("PointTXT.txt", std::ios::app);
	out << "X = " << x << " Y = " << y << " Z = " << z << endl;
	out.close();
}

void Point::ConsolPoint()
{
	char buf[100] = {};
	ifstream some_file("PointTXT.txt");
	some_file.getline(buf, 100);
	some_file.close();
	cout << buf << endl;
}