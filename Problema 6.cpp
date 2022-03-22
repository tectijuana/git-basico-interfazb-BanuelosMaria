#include <iostream>
#include<math.h>
/**
 * Problema 6 
 * El Mariner 9 empleó 167 dias para ir de la Tierra a Marte, que se encuentra a una distancia de 
 * 34,9000,000 millas, aproximadamente. Expresa esta distancia en KM. 
 * ¿Cual fue su velocidad
 * promedio en km/h?
 * */
 //@Autor   BanuelosMaria
 //@Date    08 Marzo 2022

using namespace std;
//Variables globales
    int distancia = 349000000;
    int km = distancia* 1.609;
    int dias = 167;
    int hrs=dias * 24;
    
float conversion () //Funcion
{
    float resultado = km/hrs; //Operacion
    return resultado;
}

int main()
{
    
    cout<<"\tProblema 6";
    cout<<"\nEl Mariner 9 empleó 167 dias para ir de la Tierra a Marte, que se encuentra a una distancia de\n34,9000,000 millas, aproximadamente. Expresa esta distancia en KM. ¿Cual fue su velocidad\npromedio en km/h";
    cout<<"\n\nDatos: \n"<<"Distancia: "<<distancia<<" millas \nDias= "<<dias;
    cout<<"\n\nConvertidor:\n";
    cout<<"Millas a kilometros= "<<km<<" km.";
    cout<<"\nDias a horas = "<<hrs <<" dias.";
    cout<<"\n\nFormula de distancia\nVelocidad = distancia/tiempo";
    cout<<"\n\nLa velocidad es de: "<<conversion ()<<" km/h"; //llamada de la funcion
    
    return 0;
}



