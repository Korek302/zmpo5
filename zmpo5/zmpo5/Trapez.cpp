#include "Trapez.h"

#define _USE_MATH_DEFINES
#include <math.h>

Trapez::Trapez()
{
	dLesserBase = 0.0;
	dBaseOffset1 = 0.0;
	dBaseOffset2 = 0.0;
	dHeight = 0.0;
}

Trapez::Trapez(double dNewBase, double dNewOffset1, double dNewOffset2, double dNewHeight)
{
	 dLesserBase = dNewBase;
	 dBaseOffset1 = dNewOffset1;
	 dBaseOffset2 = dNewOffset2;
	 dHeight = dNewHeight;
}

Trapez::Trapez(const Trapez &pOther)
{
	*this = pOther;
}

double Trapez::dArea()
{
	return ((dGetBase() + dGetBase() + dGetOffset1() + dGetOffset2())*dGetHeight())/2;
}

double Trapez::dPeremeter()
{
	return dGetBase() + dGetBase() + dGetOffset1() + dGetOffset2() + sqrt(dGetOffset1()*dGetOffset1() + 
		dGetHeight()*dGetHeight()) + sqrt(dGetOffset2()*dGetOffset2() + dGetHeight()*dGetHeight());
}

string Trapez::toString()
{
	return "Trapez(" + to_string(dLesserBase) + ", " + to_string(dBaseOffset1) + ", " + to_string(dBaseOffset2) 
		+ ", " + to_string(dHeight) + ")";
}

double Trapez::dGetBase()
{
	return dLesserBase;
}

double Trapez::dGetOffset1()
{
	return dBaseOffset1;
}

double Trapez::dGetOffset2()
{
	return dBaseOffset2;
}

double Trapez::dGetHeight()
{
	return dHeight;
}