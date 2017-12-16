/*
COMPUTO DE CARGA RESIDENCIAL

*/

#include <iostream>

using namespace std;

int main()
{
	const int ThreeVA = 3, CIRCUIT = 1500, LAUNDRY = 1500;
	int nCircuits, TotCharge;
	float GenLight, sAppliances, Laundry, area, length, width;
	char selection;

	cout << "Enter the area of the residence\n";
	cout << "Enter the length\n";
	cin >> length;
	cout << "Enter the width\n";
	cin >> width;

	area = length * width;
	GenLight = area * ThreeVA;

	cout << "Charge of General Lighting is " << GenLight << "VA\n";

	nCircuits = GenLight / (120 * 20);

	cout << "Number of circuits " << nCircuits << endl;

	sAppliances = 2 * CIRCUIT;

	cout << "Charge of Small Appliances  is " << sAppliances << "VA\n";

	nCircuits = sAppliances / (120 * 20);

	cout << "Number of circuits " << nCircuits << endl;

	cout << "Charge of Laundry is " << LAUNDRY << "VA\n";

	TotCharge = GenLight + sAppliances + LAUNDRY;

	cout << "Total Charge " << TotCharge << "VA\n";

	cout << "Select appliances: ";
	do
	{
		

		switch (selection)
		{
		case '1':
			cout << 
			break;
		case '2':
			break;
		case '3':
			break;
		case '4':
			break;
		case '5':
			break;
		default:
			
		}

	}

	system("pause");
	return 0;
}