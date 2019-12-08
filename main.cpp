#include <iostream>
//#include <cmath>//math.h
//#define PI 3.14159

using namespace std;

int main(){
    /*Miniprograma para iniciar a C++ y entender mínimamente la sintaxis, una salida por consola, comentarios, etc.*/
    /*
    //cout << "Hello world!" << endl;
    cout << "¡Hola mundo 1!" << endl;
    cout << "¡Hola mundo 2!" << endl;
    */

    /************************************************************************************/

    /*Miniprograma para ver los tipos de variables, declaración de variables, asignación de variables, etc.*/
    /*Tipo variables*/
    /*Tipos de variables
    int -> Integer -> Enteros
    char -> Character -> Caracter
    float -> Float -> Reales
    double -> Double -> Reales
    bool -> Boolean -> Lógicos
    */

    /*Declaración de variables*/
    /*int edad = 25, varx = 30;
    char varChar = 'A';
    float promedioFinal = 3.14, promF = 15.9;
    double varDoble = 158.12;
    bool varBool = false;
    //edad = varx;
    cout << edad << endl;*/

    /*Miniprograma para entender la notación científica en C++*/
    /*Notación científica*/
    /*int valor1 = 3e3; //3*10^3
    double valor2 = 5.3e3; //5.3*10^3
    double valor3 = 1.222e-3; //1.222*10^-3
    cout << valor1 << endl;
    cout << valor2 << endl;
    cout << valor3 << endl;*/

    /*Miniprograma para comprobar y conocer más sobre el tipo de variable char.*/
    /*TIPO CHAR*/
    /*PESO EN BYTES = 1
    Nº valores = 256
    Rango = de -128 a 127
    */
    /*char letra = 65;
    cout<<letra<<endl;*/

    /*Miniprograma para comprobar y conocer más sobre el tipo de variable int.*/
    /*TIPO INT*/
    /*PESO EN BYTES = 4(varía)
    Nº de valores = 2^32 = 4,294,967,296
    Rango = de -2,147,483,648 a 2,147,483,647
    32 bits
    1 bit -> Signo
    31 bits -> Valores que puede tomar -> 2^31 -> 2,147,483,648
    32 bits -> 2^32 -> 4,294,967,296
    unsigned -> Sin signo
    unsigned int -> 32 bits para los valores
    2^32 -> 4,294,967,296
    Rango -> 0 hasta 4,294,967,296
    */
    /*int numero = -1;
    unsigned int numero2 = -1;
    cout<<numero<<endl;
    cout<<numero2<<endl;*/

    /*Miniprograma para comprobar y conocer más sobre los tipos de variables bool, float y double.*/
    /*Bool      Float               Double
PESO: 1 byte    4 bytes             8 bytes
RANGO: -     1.17e-38 a 3.40e38  2.22e308 a 1.80e308
    */

    /*cout <<"  Bool: " << sizeof(bool)<<endl;
    cout <<" Float: " << sizeof(float)<<endl;
    cout <<"Double: " << sizeof(double)<<endl;*/

    /*Miniprograma aprender la entrada por consola en C++.*/
    /*ENTRADA POR CONSOLA*/
    /*CIN -> Console INput*/
    /*int numero;
    cout << "Introduzca un número: ";
    cin >> numero;
    cout << "El valor ingresado es " << numero << endl;*/

    /*Prueba para el Quiz 1: Examen 1*/
    /*cout << "Aprendiendo C++!!\b";*/

    /*Miniprograma para trabajar con los operadores matemáticos*/
    /*OPERADORES MATEMÁTICOS*/
    /*  Suma -> +
        Resta -> -
        Multiplicación -> *
        División -> /
        MÓDULO -> %
    */

    /*
    int numero1 = 7;
    int numero2 = 3;
    int cociente = numero1 / numero2;
    int mod = numero1 % numero2;
    cout << cociente << endl;
    cout << mod << endl;
    cout << 5 + 5 << endl;
    cout << 3 - 5 << endl;
    cout << 5 * 5 << endl;
    cout << 5 / 5 << endl;
    */

    /*Miniprograma para trabajar con la división entera y la división real*/
    /*DIVISIÓN ENTERA Y DIVISIÓN REAL*/
    /*
    //cout << 7 << endl;
    cout << 7/3 << endl;
    //cout << 7.0 << endl;
    cout << 7.0/3 << endl;
    cout << 7/3.0 << endl;
    cout << 7.0/3.0 << endl;
    */

    /**Miniprograma para trabajar con la precedencia aritmética**/
    /**PRECEDENCIA ARITMÉTICA**/
    /**
    1.- Las operaciones entre paréntesis.
    2.- Multiplicación, división y módulo.
    3.- Suma y resta.
    ->
    **/
    /*
    cout << 14 - 8 / 2 * 3 + 1 << endl; //3
    cout << (14 - 8) / 2 * 3 + 1 << endl; //10
    cout << 14 - (8 / 2 * 3) + 1 << endl; //3
    cout << 14 - 8 / 2 * (3 + 1) << endl; //-2
    cout << (14 - 8) / 2 * (3 +1 ) << endl; //12
    */

    /*Cambio a KDevelop*/
    //cout << "Objetivo logrado";
    
    //OPERADORES LÓGICOS
    //      Y   ->  &&  ->  SI LOS 2 VALORES SON VERDADEROS
    //      O   ->  ||  ->  SI 1 DE ELLOS ES VERDAD
    //      NO  ->  !   
    
    //Igualdad  ->  ==
    //Diferente ->  !=
    //Menor     ->  <
    //Mayor     ->  >
    //Menor igual   ->  <=
    //Mayor igual   ->  >=
    
    //cout << "Objetivo logrado";   Línea para comprobar la correcta salida por consola
    
    /*bool r1 = (true && true)||false;//TRUE
    bool r2 = (5 == 5) || (6 != 2) && !(1 == 1);//TRUE
    bool r3 = false && true || false;//FALSE
    bool r4 = (5 < 3) || (3 >= 3) || true;//TRUE
    bool r5 = ((3 <= 3)&& (5 < 5) || false);//FALSE
    
    cout<<r1<<endl;
    cout<<r2<<endl;
    cout<<r3<<endl;
    cout<<r4<<endl;
    cout<<r5<<endl;
    */
    
    //Funciones matemáticas con la librería cmath.h
    /*double potencia = pow(5,5);//Potencia
    double raiz = sqrt(100.0);//Raíz cuadrada
    double seno = sin(0.523599);//30º
    double coseno = cos(1.0472);//60º
    double tangente = tan(0.785398);//45º
    cout<<"Potencia: "<<potencia<<endl;
    cout<<"Raíz: "<<raiz<<endl;
    cout<<"Seno: "<<seno<<endl;
    cout<<"Coseno: "<<coseno<<endl;
    cout<<"Tangente: "<<tangente<<endl;
    */
    
    //Constantes en C++
    const double PI = 3.14159;
    cout<<PI<<endl;
    
    return 0;
}
