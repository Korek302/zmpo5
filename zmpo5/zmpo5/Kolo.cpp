#include "Kolo.h"

#define _USE_MATH_DEFINES
#include <math.h>

Kolo::Kolo()
{
	dR = 0.0;
}

Kolo::Kolo(double dValue)
{
	dR = dValue;
}

Kolo::Kolo(const Kolo &pOther)
{
	*this = pOther;
}

double Kolo::dArea()
{
	return M_PI*dGetR()*dGetR();
}

double Kolo::dPeremeter()
{
	return 2*M_PI*dGetR();
}

string Kolo::toString()
{
	return "Kolo(" + to_string(dR) + ")";
}

double Kolo::dGetR()
{
	return dR;
}