#include <iostream>

using namespace std;
/**
*Problema 4.3 (Capitulo 3, problema 39)
* Dada la longitud de un lado de un cuadrado,
* calcular el perimetro.
**/

//@Author   BanuelosMaria
//@Date     21 Marzo 2022

double perimetro()
{
    //variables
    double lado, peri;
    cout <<"\nIngrese la medida de un lado del cadrado: ";
    cin >> lado; 
    peri=lado*4; // operacion

    cout <<"El perimetro de su cuadrado es: " << peri ;
    return 0;
}

int main()
{
    cout<<"Problema 4.2\n(Capitulo 3, problema 39)";
    cout<<"\nPerimetro de un cuadrado";
    //llamada de la funcion
    perimetro();

    return 0;
}
