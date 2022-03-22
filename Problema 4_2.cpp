#include <iostream>
using namespace std;
/**
*Problema 4.2 (Capitulo 3, problema 37)
* Dada la longitud del lado de un cuadrado, 
* calcula el area.
**/

//@Author   BanuelosMaria
//@Date     21 Marzo 2022

//funcion
double area()
{
    //variables
    double lado, area;
    cout <<"\nIngrese la medida de un lado del cadrado: ";
    cin >> lado; 
    area=lado*lado; // operacion

    cout <<"El area de su cuadrado es: " << area ;
    return 0;
}

int main()
{
    cout<<"Problema 4.2\n(Capitulo 3, problema 37)";
    cout<<"\n\tArea de un cuadrado";
    //llamada de la funcion
    area();

    return 0;
}
