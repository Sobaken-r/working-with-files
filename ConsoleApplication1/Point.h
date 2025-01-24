#pragma once
#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;


class Point
{
	float x;
	float y;
	float z;
public:
	void setPointX(float x_p);
	void setPointY(float y_p);
	void setPointZ(float z_p);

	float getPointX();
	float getPointY();
	float getPointZ();

	void PrintPoint();
	void ConsolPoint();
};

