#include <iostream>
using namespace std;

int main(){
    //Estructura condicional múltiple
    
    //int variable;//switch también puede analizar char
    char variable2;
    
    //cin >> variable;
    cin >> variable2;
    
    switch(variable2){
        case '1': cout << "Caso 1" << endl;
        break;
        case '2': cout << "Caso 2" << endl;
        break;
        case '3': cout << "Caso 3" << endl;
        break;
        default: cout << "Ningún caso" << endl;
    }
    
    return 0;
}
