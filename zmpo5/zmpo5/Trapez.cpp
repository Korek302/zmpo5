#include "Trapez.h"

#define _USE_MATH_DEFINES
#include <math.h>

Trapez::Trapez()
{
	dBase1 = 0.0;
	dBase2 = 0.0;
	dBaseOffset = 0.0;
	dHeight = 0.0;
}

Trapez::Trapez(double dNewBase1, double dNewBase2, double dNewOffset, double dNewHeight)
{
	 dBase1 = dNewBase1;
	 dBase2 = dNewBase2;
	 dBaseOffset = dNewOffset;
	 dHeight = dNewHeight;
}

Trapez::Trapez(const Trapez &pOther)
{
	*this = pOther;
}

double Trapez::dArea()
{
	return ((dGetBase1()+dGetBase2())*dGetHeight())/2;
}

double Trapez::dPeremeter()
{
	return dGetBase1() + dGetBase2()+ sqrt(dGetOffset()*dGetOffset() + 
		dGetHeight()*dGetHeight())+sqrt((dGetBase1()-dGetBase2()-dGetOffset()) + dGetHeight()*dGetHeight());
}

string Trapez::toString()
{
	return "Trapez(" + to_string(dBase1) + ", " + to_string(dBase2) + ", " + to_string(dBaseOffset) 
		+ ", " + to_string(dHeight) + ")";
}

double Trapez::dGetBase1()
{
	return dBase1;
}

double Trapez::dGetBase2()
{
	return dBase2;
}

double Trapez::dGetOffset()
{
	return dBaseOffset;
}

double Trapez::dGetHeight()
{
	return dHeight;
}