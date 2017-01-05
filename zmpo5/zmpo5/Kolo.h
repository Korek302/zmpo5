#pragma once
#include "Figura.h"

class Kolo : public Figura
{
public:
	Kolo();
	Kolo(double dValue);
	Kolo(const Kolo &pOther);
	double dArea();
	double dPeremeter();
	string toString();
	double dGetR();
private:
	double dR;
};