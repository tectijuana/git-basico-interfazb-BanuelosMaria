#include <iostream>
#include <stdlib.h>
/**
*Problema 8
*
* Calcular e imprimir el numero de segundos que hay 
* en una semana,
* en tres semanas,
* en un mes,
* un mes y tres dias
**/

//@Author   BanuelosMaria
//@Date     08 Marzo 2022

using namespace std;
int segundos()
{
    int seghr= 3600; //segundos que hay en un dias
    int segsem= 25200; //segundos que hay en la semana
    int segmes= 108000; //segundos que hay en un mes (30 dias)
    cout <<"\nUna semana = "<<segsem<<" seg"<<endl;
    cout <<"\nTres semanas = "<<segsem*3<<" seg"<<endl;
    cout <<"\nUn mes = "<<segmes<<" seg"<<endl;
    cout <<"\nUn mes y tres dias = "<<segmes + (seghr*3)<<" seg"<<endl;
    return 0;
}

int main()
{
    cout <<"\tProblema 8"<<endl;
    cout <<"\n\nConvertidor de dias/meses a segundos";
    //Llamada de funcion
    segundos();
    return 0;
}

