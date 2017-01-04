#include <iostream>
#include "Kolo.h"

int main()
{
	Kolo k(2.4);
	cout << k.area() << "  " << k.getR() << "  " << k.peremeter();

	getchar();
	return 0;
}