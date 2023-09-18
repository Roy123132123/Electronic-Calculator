
#include <iostream>
#include <Cmath>
#include <string>

using namespace std;
int main()
{
	int Ampere, Mampere, Wat, ohm;
	int result;
	int Volt = 0;
	string Operation;

	cout << "Enter unit you want to calculate: Ampere, Mili ampere(Mampere),Wats, ohm ";
	cin >> Operation;


	if (Operation == "Wat") {
		cout << "enter Ampere ", cin >> Ampere;
		cout << "Enter Voltage ", cin >> Volt;
		cout << Ampere * Volt << " Wat";
	
	}
	else if (Operation == "Mampere") {
		cout << "Enter Amperage ", cin >> Ampere;
		cout << Ampere / 1000 << " MA";
	}
	else if (Operation == "Ampere") {
		cout << "Enter Mili Ampere ", cin >> Mampere;
		cout << Mampere * 1000 << " A";
	}
	else if (Operation == "ohm") {
		cout << "Enter Amperage ", cin >> Ampere;
		cout << "Enter Voltage ", cin >> Volt;
		cout << Volt / Ampere << " Ω";
	}
	else if (Operation == "Volt") {
		cout << "Enter Amperage ", cin >> Ampere;
		cout << "Enter Ohms ", cin >> ohm;
		cout << Ampere * ohm << " V";
	}
	else {
		cout << "Enter a valid Operation please";
	}

	return 0;
}
