#include <iostream>
#include <Windows.h>
#include <fstream>
#include "Point.h"
using namespace std;


int main()
{
	setlocale(0, "");
	Point V1;
	V1.setPointX(10);
	V1.setPointY(14);
	V1.setPointZ(3);

	Point V2;
	V2.setPointX(101);
	V2.setPointY(143);
	V2.setPointZ(32);

	V1.PrintPoint();
	V2.PrintPoint();

	V1.ConsolPoint();
	V2.ConsolPoint();

}
