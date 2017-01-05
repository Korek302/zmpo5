#pragma once
#include <string> 

using namespace std;

class Figura
{
public:
	virtual double dArea() = 0;
	virtual double dPeremeter() = 0;
	virtual string toString() = 0;
private:

};