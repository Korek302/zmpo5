#pragma once
#include "Figura.h"

class Kolo : public Figura
{
public:
	Kolo();
	Kolo(double value);
	double area();
	double peremeter();
	string toString();
	double getR();
private:
	double r;
};