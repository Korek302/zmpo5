#include "Kolo.h"

#define _USE_MATH_DEFINES
#include <math.h>

Kolo::Kolo()
{
	r = 0.0;
}

Kolo::Kolo(double value)
{
	r = value;
}

double Kolo::area()
{
	return M_PI*getR()*getR();
}

double Kolo::peremeter()
{
	return 2*M_PI*getR();
}

string Kolo::toString()
{
	return "kolo(" + to_string(r) + ")";
}

double Kolo::getR()
{
	return r;
}