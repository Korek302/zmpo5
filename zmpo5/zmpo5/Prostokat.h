#pragma once
#include "Figura.h"

class Prostokat : public Figura
{
public:
	Prostokat();
	Prostokat(double dNewSide1, double dNewSide2);
	Prostokat(const Prostokat &pOther);
	double dArea();
	double dPeremeter();
	string toString();
	double dGetSide1();
	double dGetSide2();
private:
	double dSide1;
	double dSide2;
};