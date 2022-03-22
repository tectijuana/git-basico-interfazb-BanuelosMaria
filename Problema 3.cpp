#include <iostream>
#include<math.h>
/**
 * Problema 3 
 * 
 * La densidad media de la tierra es 5.522 g/cm^3. 
 * Determina la masa de la tierra en gramos. 
 * NOTA: Volumen de la tierra es de un billon
 * 1billon = 1000000000000
 * Formula de masa = d*V 
 * */
 //@Autor   BanuelosMaria
 //@Date    08 Marzo 2022

using namespace std;

float conversion()
{
    double densidadTierra= 5.522; 
    float volumen= 1000000000000; //Volumen de la tierra
    double resultad = volumen* densidadTierra; //Operacion para sacar la masa de la tierra
    double res = resultad *1000000000000000;//convertidor de km^3 a cm^3
    return res;
}
int main()
{
    double densidadTierra= 5.522;
    float volumen= 1000000000000;
    cout<<"\tProblema 3 \n\nLa densidad media de la tierra es 5.522 g/cm^3.\nDetermina la masa de la tierra en gramos.";
    cout<<"\n\nFormula de la masa\nm=d*v";
    cout<<"\n\nDatos:\nDensidad= "<<densidadTierra<<"g/cm^3"<<"\nVolumen: "<<volumen<<"km^3" ;
    cout<<"\n\n\tLa masa de la tierra es:\n "<< conversion() <<" g." <<endl;//se llamó a la funcion

    return 0;
}

