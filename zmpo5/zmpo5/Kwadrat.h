#pragma once
#include "Figura.h"

class Kwadrat : public Figura
{
public:
	Kwadrat();
	Kwadrat(double dNewSide);
	double dArea();
	double dPeremeter();
	string toString();
	double dGetSide();
private:
	double dSide;
};