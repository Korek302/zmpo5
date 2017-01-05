#pragma once
#include "Figura.h"

class Trapez : public Figura
{
public:
	Trapez();
	Trapez(double dNewBase1, double dNewBase2, double dNewOffset, double dNewHeight);
	double dArea();
	double dPeremeter();
	string toString();
	double dGetBase1();
	double dGetBase2();
	double dGetOffset();
	double dGetHeight();
private:
	double dBase1;
	double dBase2;
	double dBaseOffset;
	double dHeight;
};