#include "Prostokat.h"

Prostokat::Prostokat()
{
	dSide1 = 0.0;
	dSide2 = 0.0;
}

Prostokat::Prostokat(double dNewSide1, double dNewSide2)
{
	dSide1 = dNewSide1;
	dSide2 = dNewSide2;
}

double Prostokat::dArea()
{
	return dGetSide1()*dGetSide2();
}

double Prostokat::dPeremeter()
{
	return 2 * dGetSide1() + 2 * dGetSide2();
}

string Prostokat::toString()
{
	return "Prostokat(" + to_string(dSide1) + ", " + to_string(dSide2) + ")";
}

double Prostokat::dGetSide1()
{
	return dSide1;
}

double Prostokat::dGetSide2()
{
	return dSide2;
}