#include <iostream>
using namespace std;

int main(){
	//Escriba un programa que lea 3 notas y muestre el promedio final.
	float nota1, nota2, nota3, promedioFinal;
	
	cout << "Introduzca la nota 1: ";
	cin >> nota1;
	
	cout << "Introduzca la nota 2: ";
	cin >> nota2;
	
	cout << "Introduzca la nota 3: ";
	cin >> nota3;

	promedioFinal = (nota1 + nota2 + nota3) / 3;
	cout << "Promedio final: " << promedioFinal << endl;

	return 0;
}
