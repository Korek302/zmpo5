#pragma once
#include <string> 

using namespace std;

class Figura
{
public:
	virtual ~Figura() {};
	virtual double darea() = 0;
	virtual double dPeremeter() = 0;
	virtual string toString() = 0;
};

