#include <iostream>
using namespace std;

int	main()
{
	/* En un estacionamiento cobran $/.1.50 por hora o fracción.
	Diseñe un programa que determine cuanto debe pagar un cliente por
	el estacionamiento de su vehículo, conociendo el tiempo de
	estacionamiento en horas y minutos.*/
	
	int hours, minutes;
	float total;

	cout << "Input the number of hours: ";
	cin >> hours;
	cout << "Input the number of minutes: ";
	cin >> minutes;

	if (minutes > 0)
		hours++; //The same as -> hours = hours + 1;
	total = hours * 1.5;
	cout << "The total amount to pay is " << total << endl;

	return (0);
}
