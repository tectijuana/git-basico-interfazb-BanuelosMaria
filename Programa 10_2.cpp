#include <iostream>
#include <math.h>
using namespace std;
/**
*Problema 10.2 (capitulo 3 problema 8) 
* Encintrar el área de cualquier rectangulo con la formula del área
* A= lw, donde l es la longitud y w es el ancho.
**/

//@Author   BanuelosMaria
//@Date     21 Marzo 2022

//variables globales
int ancho, longitud, area;

double arearectangulo()
{ 
    cout<<"\nIngrese la ancho: ";
    cin>>ancho;
    cout<<"\nIngrese la longitud: ";
    cin>>longitud;
    area=ancho*longitud;
    cout<<"\nEl area del Rectangulo es :"<<area<<endl;
    return 0;
}
int main() 
{
    cout<<"Programa 10.2\n(Capitulo 3 problema 8)"<<endl;
    cout<<"Area de un rectangulo\n";
   arearectangulo();
    return 0;
}