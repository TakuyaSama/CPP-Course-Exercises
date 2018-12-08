#include <iostream>
using namespace std;

int main(){
	//Construya un programa que permita convertir una temperatura en grados Celsius a Fahrenheit (C = 5(F - 32) / 9) y Kelvin (C = K - 273.15).
	float celsius, fahrenheit, kelvin;
	cout << "Ingrese los grados Celsius: ";
	cin >> celsius;

	fahrenheit = ((celsius * 9) / 5) + 32;
	kelvin = celsius + 273.15;
	cout << "Los grados en Kelvin son " << kelvin << endl;
	cout << "Los grados en Fahrenheit son " << fahrenheit << endl;

	return 0;
}
