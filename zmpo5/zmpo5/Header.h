#pragma once
#include "Kolo.h"
#include "Kwadrat.h"
#include "Prostokat.h"
#include "Trapez.h"
#include "Trojkat.h"

void go(int iHowMany, Figura** ppTtab, int iTabLength, bool bIsCreated);

void createCircle(int iPosition, double dNewSideRadius, Figura** ppTab, int iTabLength);

void createSquare(int iPosition, double dNewSide, Figura** ppTab, int iTabLength);

void createRect(int iPosition, double dNewSide1, double dNewSide2, Figura** ppTab, int iTabLength);

void createTrapeze(int iPosition, double dNewBase, double dNewOffset1, double dNewOffset2, 
	double dNewHeight, Figura** ppTab, int iTabLength);

void createTriangle(int iPosition, double dNewSideA, double dNewSideB, Figura** ppTab, int iTabLength);

void show(int iPosition, Figura** ppTab, int iTabLength);
void showAll(Figura** ppTab, int iTabLength);

void sumOfAreas(Figura** ppTab, int iTabLength);
void sumOfPeremeters(Figura** ppTab, int iTabLength);

