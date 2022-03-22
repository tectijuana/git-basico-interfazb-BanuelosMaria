#include <iostream>
#include <math.h>
using namespace std;
/**
*Problema 10.1 (capitulo 3 problema 9) 
* Encontrar el tercer lado de un triangulo 
* mediente el teorema de pitagoras.
**/

//@Author   BanuelosMaria
//@Date     21 Marzo 2022

float pitagoras()
{
    //variables
    float a,b,c;
    cout<<"Ingrese el Primer cateto: ";
    cin>>a;
    cout<<"Ingrese el Segundo cateto: ";
    cin>>b;
    //teorema de pitagoras
    c=sqrt(pow(a,2)+pow(b,2));
    //resultado
    cout<<"La Hipotenusa es: "<<c;
     
   
    cin.ignore();
    return 0;
}
int main()
{
    cout<<"Problema 10.1 \n(Capitulo 3 Gemotria problema 9)"<<endl<<endl;
    //llamado de funcion
    pitagoras();
    return 0;
 
}
