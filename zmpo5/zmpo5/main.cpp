#include <iostream>
#include "Kolo.h"
#include "Kwadrat.h"
#include "Prostokat.h"
#include "Trapez.h"

int main()
{
	Kolo k(2.4);
	cout << k.toString() << ", Area: " << k.dArea() << ", Peremeter: " << k.dPeremeter() << endl;

	Trapez t(3, 4, 1.5, 2);
	cout << t.toString() << ", Area: " << t.dArea() << ", Peremeter: " << t.dPeremeter() << endl;

	Kwadrat kw(3);
	cout << kw.toString() << ", Area: " << kw.dArea() << ", Peremeter: " << kw.dPeremeter() << endl;

	Prostokat p(3, 4);
	cout << p.toString() << ", Area: " << p.dArea() << ", Peremeter: " << p.dPeremeter() << endl;

	getchar();
	return 0;
}