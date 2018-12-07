#include <iostream>
using namespace std;

int main(){
    //1.- Escriba un programa que nos permita hallar el área de un triángulo
    float base, altura, area;
    
    cout << "Ingrese la base del triángulo: ";
    cin >> base;
    
    cout << "Ingrese la altura del triángulo: ";
    cin >> altura;
    
    area = base * altura / 2;
    cout << "El área del triángulo es: " << area << endl;
    
    return 0;
}
