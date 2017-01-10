#include "Trojkat.h"

Trojkat::Trojkat()
{
	dSideA = 0.0;
	dSideB = 0.0;
}

Trojkat::Trojkat(double dNewSideA, double dNewSideB)
{
	dSideA = dNewSideA;
	dSideB = dNewSideB;
}

Trojkat::Trojkat(const Trojkat &pOther)
{
	*this = pOther;
}

double Trojkat::dArea()
{
	return (1/2)*dGetSideA()*dGetSideB();
}

double Trojkat::dPeremeter()
{
	return dGetSideA() + dGetSideB() + sqrt(dGetSideA()*dGetSideA() + dGetSideB()*dGetSideB());
}

string Trojkat::toString()
{
	return "Trojkat(" + to_string(dSideA) + ", " + to_string(dSideB) +")";
}

double Trojkat::dGetSideA()
{
	return dSideA;
}

double Trojkat::dGetSideB()
{
	return dSideB;
}