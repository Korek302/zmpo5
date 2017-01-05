#include <iostream>
#include "Header.h"

void go(int iHowMany, Figura** ppTab, int iTabLength, bool bIsCreated)
{
	if (iHowMany < 0)
		cout << "ERROR" << endl;
	else
	{
		iTabLength = iHowMany;
		ppTab = new Figura*[iHowMany];
		bIsCreated = true;
		cout << "DONE" << endl;
	}
}

void createCircle(int iPosition, double dNewSideRadius, Figura** ppTab, int iTabLength)
{
	if (iPosition < 0 || iPosition > iTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		ppTab[iPosition] = new Kolo(dNewSideRadius);
		cout << "DONE" << endl;
	}
}

void createSquare(int iPosition, double dNewSide, Figura** ppTab, int iTabLength)
{
	if (iPosition < 0 || iPosition > iTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		ppTab[iPosition] = new Kwadrat(dNewSide);
		cout << "DONE" << endl;
	}
}

void createRect(int iPosition, double dNewSide1, double dNewSide2, Figura** ppTab, int iTabLength)
{
	if (iPosition < 0 || iPosition > iTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		ppTab[iPosition] = new Prostokat(dNewSide1, dNewSide2);
		cout << "DONE" << endl;
	}
}

void createTrapeze(int iPosition, double dNewBase1, double dNewBase2, double dNewOffset, double dNewHeight,
	Figura** ppTab, int iTabLength)
{
	if (iPosition < 0 || iPosition > iTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		ppTab[iPosition] = new Trapez(dNewBase1, dNewBase2, dNewOffset, dNewHeight);
		cout << "DONE" << endl;
	}
}

void show(int iPosition, Figura** ppTab, int iTabLength)
{
	if (iPosition < 0 || iPosition > iTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		(*ppTab[iPosition]).toString();
		cout << "DONE" << endl;
	}
}

void showAll(Figura** ppTab, int iTabLength)
{
	if (iTabLength <= 0)
		cout << "ERROR" << endl;
	else
	{
		for (int iI = 0; iI < iTabLength; iI++)
		{
			cout << (*ppTab[iI]).toString() << endl;
		}
		cout << "DONE" << endl;
	}
}

void sumOfAreas(Figura** ppTab, int iTabLength)
{
	if (iTabLength <= 0)
		cout << "ERROR" << endl;
	else
	{
		double dSum = 0;
		for (int iI = 0; iI < iTabLength; iI++)
		{
			dSum += (*ppTab[iI]).dArea();		}
		cout << dSum << endl;
		cout << "DONE" << endl;
	}
}

void sumOfPeremeters(Figura** ppTab, int iTabLength)
{
	if (iTabLength <= 0)
		cout << "ERROR" << endl;
	else
	{
		double dSum = 0;
		for (int iI = 0; iI < iTabLength; iI++)
		{
			dSum += (*ppTab[iI]).dPeremeter();
		}
		cout << dSum << endl;
		cout << "DONE" << endl;
	}
}