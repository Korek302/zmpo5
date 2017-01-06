#include <string>
#include <iostream>

#include "Header.h"

int main()
{
	Figura** ppTab = NULL;
	int iTabLength;
	bool bIsCreated = false;
	string sChoice;
	do
	{
		cin >> sChoice;
		if (sChoice == "!go")
		{
			if (bIsCreated)
				cout << "table already created" << endl;
			else
			{
				int iHowMany;
				cin >> iHowMany;
				if (iHowMany < 0)
					cout << "ERROR" << endl;
				else
				{
					iTabLength = iHowMany;
					ppTab = new Figura*[iHowMany];
					for (int iI = 0; iI < iTabLength; iI++)
						ppTab[iI] = NULL;
					bIsCreated = true;
					cout << "DONE" << endl;
				}
			}
		}
		else if (sChoice == "!createCircle")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				int iPosition;
				double dR;
				cin >> iPosition;
				cin >> dR;
				createCircle(iPosition, dR, ppTab, iTabLength);
			}
		}
		else if (sChoice == "!createSquare")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				int iPosition;
				double dSide;
				cin >> iPosition;
				cin >> dSide;
				createSquare(iPosition, dSide, ppTab, iTabLength);
			}
		}
		else if (sChoice == "!createRect")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				int iPosition;
				double dSide1;
				double dSide2;
				cin >> iPosition;
				cin >> dSide1;
				cin >> dSide2;
				createRect(iPosition, dSide1, dSide2, ppTab, iTabLength);
			}
		}
		else if (sChoice == "!createTrapeze")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				int iPosition;
				double dBase;
				double dOffset1;
				double dOffset2;
				double dHeight;
				cin >> iPosition;
				cin >> dBase;
				cin >> dOffset1;
				cin >> dOffset2;
				cin >> dHeight;
				createTrapeze(iPosition, dBase, dOffset1, dOffset2, dHeight, ppTab, iTabLength);
			}
		}
		else if (sChoice == "!show")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				int iPosition;
				cin >> iPosition;
				show(iPosition, ppTab, iTabLength);
			}
		}
		else if (sChoice == "!showAll")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				showAll(ppTab, iTabLength);
			}
		}
		else if (sChoice == "!sumOfAreas")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				sumOfAreas(ppTab, iTabLength);
			}
		}
		else if (sChoice == "!sumOfPeremeters")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				sumOfPeremeters(ppTab, iTabLength);
			}
		}
		else if (sChoice == "!exit")
		{
			for (int iI = 0; iI < iTabLength; iI++)
			{
				if(ppTab[iI] != NULL)
					delete ppTab[iI];
			}
			break;
		}
		else
		{
			cout << "wrong command" << endl;
		}

	} while (sChoice[0] != '0');

	if (bIsCreated)
	{
		delete ppTab;
	}

	getchar();
	return 0;
}