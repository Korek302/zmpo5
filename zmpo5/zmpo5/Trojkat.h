#pragma once
#include "Figura.h"

class Trojkat : public Figura
{
public:
	Trojkat();
	Trojkat(double dNewSideA, double dNewSideB);
	Trojkat(const Trojkat &pOther);
	double dArea();
	double dPeremeter();
	string toString();
	double dGetSideA();
	double dGetSideB();
private:
	double dSideA;
	double dSideB;
};