#pragma once
#include "Kolo.h"
#include "Kwadrat.h"
#include "Prostokat.h"
#include "Trapez.h"

void go(int iHowMany, Figura** ppTtab, int iTabLength, bool bIsCreated);

void createCircle(int iPosition, double dNewSideRadius, Figura** ppTab, int iTabLength);

void createSquare(int iPosition, double dNewSide, Figura** ppTab, int iTabLength);

void createRect(int iPosition, double dNewSide1, double dNewSide2, Figura** ppTab, int iTabLength);

void createTrapeze(int iPosition, double dNewBase1, double dNewBase2, double dNewOffset, 
	double dNewHeight, Figura** ppTab, int iTabLength);

//void createCopy(int iPosition, int iPositionFrom, Figura** ppTab, int iTabLength);

void show(int iPosition, Figura** ppTab, int iTabLength);
void showAll(Figura** ppTab, int iTabLength);

void sumOfAreas(Figura** ppTab, int iTabLength);
void sumOfPeremeters(Figura** ppTab, int iTabLength);

