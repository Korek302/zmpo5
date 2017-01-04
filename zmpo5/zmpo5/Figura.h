#pragma once
#include <string> 

using namespace std;

class Figura
{
public:
	virtual double area() = 0;
	virtual double peremeter() = 0;
	virtual string toString() = 0;
private:

};