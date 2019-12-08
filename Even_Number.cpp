#include <iostream>
using namespace std;

int	main()
{
	/**Escriba un programa que diga si un número
	   entero ingresado es par o impar**/
	int number;

	cout << "Ingrese el número: ";
	cin >> number;

	if (number%2 == 0)
	{
		cout << "El número es par" << endl;
	}
	else
	{
		cout << "El número es impar" << endl;
	}
	return (0);
}
