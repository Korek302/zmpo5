#pragma once
#include "Figura.h"

class Trapez : public Figura
{
public:
	Trapez();
	Trapez(double dNewBase1, double dNewBase2, double dNewOffset, double dNewHeight);
	Trapez(const Trapez &pOther);
	double dArea();
	double dPeremeter();
	string toString();
	double dGetBase();
	double dGetOffset1();
	double dGetOffset2();
	double dGetHeight();
private:
	double dLesserBase;
	double dBaseOffset1;
	double dBaseOffset2;
	double dHeight;
};