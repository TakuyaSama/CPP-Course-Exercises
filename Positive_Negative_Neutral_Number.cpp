#include <iostream>
using namespace std;

int	main()
{
	/**Escriba un programa que diga si un número
	  entero es positivo, negativo o neutro.**/
	int number;

	cout << "Input the number: ";
	cin >> number;
	if (number > 0)
	{
		cout << "The number is positive" << endl;
	}
	/*else		Version without else if, just with nested if/else.
	{
		if (number < 0)
			cout << "The number is negative" << endl;
		else
			cout << "The number is neutral" << endl;
	}*/
	else if (number < 0)
		cout << "The number is negative" << endl;
	else
		cout << "The number is neutral" << endl;
	return 0;
}
