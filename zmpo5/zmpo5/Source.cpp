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
	if (iPosition < 0 || iPosition > iTabLength - 1 || dNewSideRadius < 0)
		cout << "ERROR" << endl;
	else
	{
		ppTab[iPosition] = new Kolo(dNewSideRadius);
		cout << "DONE" << endl;
	}
}

void createSquare(int iPosition, double dNewSide, Figura** ppTab, int iTabLength)
{
	if (iPosition < 0 || iPosition > iTabLength - 1 || dNewSide < 0)
		cout << "ERROR" << endl;
	else
	{
		ppTab[iPosition] = new Kwadrat(dNewSide);
		cout << "DONE" << endl;
	}
}

void createRect(int iPosition, double dNewSide1, double dNewSide2, Figura** ppTab, int iTabLength)
{
	if (iPosition < 0 || iPosition > iTabLength - 1 || dNewSide1 < 0 || dNewSide2 < 0)
		cout << "ERROR" << endl;
	else
	{
		ppTab[iPosition] = new Prostokat(dNewSide1, dNewSide2);
		cout << "DONE" << endl;
	}
}

void createTrapeze(int iPosition, double dNewBase, double dNewOffset1, double dNewOffset2, double dNewHeight,
	Figura** ppTab, int iTabLength)
{
	if (iPosition < 0 || iPosition > iTabLength - 1 || dNewBase < 0 || dNewOffset1 < 0 || dNewOffset2 < 0 || dNewHeight < 0)
		cout << "ERROR" << endl;
	else
	{
		ppTab[iPosition] = new Trapez(dNewBase, dNewOffset1, dNewOffset2, dNewHeight);
		cout << "DONE" << endl;
	}
}

void show(int iPosition, Figura** ppTab, int iTabLength)
{
	if (iPosition < 0 || iPosition > iTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		if (ppTab[iPosition] != NULL)
			cout << (*ppTab[iPosition]).toString() << endl;
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
			if (ppTab[iI] != NULL)
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
			if(ppTab[iI] != NULL)
				dSum += (*ppTab[iI]).dArea();
		}
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
			if (ppTab[iI] != NULL)
				dSum += (*ppTab[iI]).dPeremeter();
		}
		cout << dSum << endl;
		cout << "DONE" << endl;
	}
}