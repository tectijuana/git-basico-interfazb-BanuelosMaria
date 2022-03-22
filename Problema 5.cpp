#include <iostream>
#include <stdlib.h>
/**
*Problema 5
*
* Escriba un porgrma que convierta los pesos de los miembros de equipo de funtbol escolar de 
*Libras a Kilogramos. (Sugerencia: 1 kg = 2.204625 libras).
**/

//@Author   BanuelosMaria
//@Date     08 Marzo 2022

using namespace std;
    //Variable globales
    string nombre;
    double libras;
    double kilogramos = 2.204625;

float conversion () //funcion de conversion
{
    double resultado = libras / kilogramos; //operacion
    return resultado;
}

int main()
{
    cout<<"\tProblema 5\n"<<endl;
    cout<<"\tConvertidor de Libras a Kilogramos\n"<<endl;
    cout<<"\nCaptura de informacion del futbolista";
    cout <<"\nNombre: ";
    cin >> nombre;
    cout <<"\nlibras: ";
    cin >> libras;
    
    cout<<"\nInformacion del futbolista";

    cout <<"\n\nNombre: "<< nombre<<endl;
    cout<<"\npeso: "<<conversion()<<" kg"<<endl;


    return 0;
}

