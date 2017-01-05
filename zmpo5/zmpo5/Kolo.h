#pragma once
#include "Figura.h"

class Kolo : public Figura
{
public:
	Kolo();
	Kolo(double dValue);
	double dArea();
	double dPeremeter();
	string toString();
	double dGetR();
private:
	double dR;
};