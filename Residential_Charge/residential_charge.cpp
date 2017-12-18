/*
COMPUTO DE CARGA RESIDENCIAL

*/

#include <iostream>
using namespace std;

void showMenu();
float area();
float GenLight();
float sAppliances();
int TotCharge(const int LAUNDRY);

float area()
{
	float area, length, width;
	cout << "Enter the area of the residence\n";
	cout << "Enter the length\n";
	cin >> length;
	cout << "Enter the width\n";
	cin >> width;

	area = length * width;
	return area;
}

int main()
{
	
	const int LAUNDRY = 1500;
	int nCircuits,  
		selection; // Numerical menu choice
	
	
	area();

	cout << "Charge of General Lighting is " << GenLight() << "VA\n";

	nCircuits = GenLight / (120 * 20);

	cout << "Number of circuits " << nCircuits << endl;

	cout << "Charge of Small Appliances is " << sAppliances() << "VA\n";

	nCircuits = sAppliances() / (120 * 20);

	cout << "Number of circuits " << nCircuits << endl;

	cout << "Charge of Laundry is " << LAUNDRY << "VA\n";

	

	cout << "Total Charge " << TotCharge(LAUNDRY) << "VA\n";

	cout << "Select appliances: ";
	//do
	//{
	//	selection = menu();

	//	switch (selection)
	//	{
	//	case 1:
	//		break;
	//	case 2:
	//		break;
	//	case 3:
	//		break;
	//	case 4:
	//		break;
	//	case 5:
	//		break;
	//	default:
	//		
	//	}

	//}

	system("pause");
	return 0;
}

int menu()
{
	int selection;
	cout << "Select all appliances in the residence\n";
	cout << " 1. Stove\n";
	cout << " 2. Heater\n";
	cout << " 3. Oven\n";
	cout << " 4. Dryer\n";
	cout << " 4. Air Conditioner\n";
	cout << "\n";
	cout << " 5. Exit\n";
	cout << "  ====================================\n";
	cout << "  Enter your selection: "; // Ask user for imput choice
	cin >> selection; // Gather input from user
	return selection;
}

float GenLight()
{
	const int ThreeVA = 3; 
	float GenLight;
	GenLight = area * ThreeVA;
	return GenLight;
}

float sAppliances()
{
	const int CIRCUIT = 1500;
	int sAppliances;
	sAppliances = 2 * CIRCUIT;
	return sAppliances;
}

int TotCharge(const int LAUNDRY)
{
	
	int TotCharge;
	TotCharge = GenLight() + sAppliances() + LAUNDRY;
	return TotCharge;
}