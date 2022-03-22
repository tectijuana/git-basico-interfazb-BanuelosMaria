#include <iostream>

using namespace std;
/**
*Problema 2 
*
*La velocidad de la luz es 2.99776x10^8 m/seg.
* Calcula el numero de metros en año-luz.
**/

//@Author   BanuelosMaria
//@Date     07 Marzo 2022

float Conversion() //funcion
{
    int luz= 299446000;
    float ano= 365.25;
    int segundos= 86400;
    float resultado = luz * ano * segundos; //operacion para la conversion 
    return resultado;
}


int main()
{
   
    cout <<"\tProblema 2\n"<<endl;
    cout<< "La velocidad de la luz es 2.99776x10^8 m/seg.\nCalcula el numero de metros en año-luz.\n"<<endl;
    cout<< Conversion(); //llamar la funcion
    cout<< " m/seg" <<endl;
    return 0;
}

