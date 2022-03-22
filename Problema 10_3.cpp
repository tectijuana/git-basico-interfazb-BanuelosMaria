#include <iostream>
#include <math.h>
using namespace std;
/**
*Problema 10.3 (capitulo 3 problema 25) 
* Introducir B, la base y H, la altura de un triangulo y determinar
* el área.
**/

//@Author   BanuelosMaria
//@Date     21 Marzo 2022

//variables globales
float B, H, resultado;
//funcion
float areaTriangulo()
{
    cout << "\nIngrese la base del triangulo: ";
    cin >> B;
    cout << "\nIngrese la altura del triangulo: ";
    cin >> H;

    resultado=(B*H)/2; //operacion
    cout << "El area de su triangulo es: " << resultado << endl;

return 0;
}

int main() 
{
    cout<<"Problema 10.3\n(Capitulo 3, problema 25)\n";
    cout<<"Calcular el área de un Triangulo.\n";
    //llamada de la funcion
    areaTriangulo();
    return 0;
}