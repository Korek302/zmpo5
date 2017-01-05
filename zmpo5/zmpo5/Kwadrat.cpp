#include "Kwadrat.h"

Kwadrat::Kwadrat()
{
	dSide = 0.0;
}

Kwadrat::Kwadrat(double dNewSide)
{
	dSide = dNewSide;
}

Kwadrat::Kwadrat(const Kwadrat &pOther)
{
	*this = pOther;
}

double Kwadrat::dArea()
{
	return dGetSide()*dGetSide();
}

double Kwadrat::dPeremeter()
{
	return 4*dGetSide();
}

string Kwadrat::toString()
{
	return "Kwadrat(" + to_string(dSide) + ")";
}

double Kwadrat::dGetSide()
{
	return dSide;
}