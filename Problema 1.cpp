#include <iostream>

using namespace std;
/**
*Problema 1 
*
* Si un cierto tipo de tapetes 
* se vende a $9 por yarda cuadrada, 
* 
* ¿Cuál es su precio por metro cuadrado?
**/

//@Author   BanuelosMaria
//@Date     07 Marzo 2022
 double conversion()
 {
     int yarda = 9;//yardas
    double metro = 1.196; //Valor del metro en yardas
    double resultado = yarda/metro; //Conversion
     return resultado; //Resultado de la conversion
 }

int main()
{
    
    cout <<"\tProblema 1\n";
    cout<<"Si un cierto tipo de tapete\nse vende a $9 por yarda cuadrada,\n¿Cuál es su precio por metro cuadrado?\n"<< endl;
    cout << conversion(); //mandar a llamar a la funcion
    cout << " metros cuadrados." <<endl;
    return 0;
}
