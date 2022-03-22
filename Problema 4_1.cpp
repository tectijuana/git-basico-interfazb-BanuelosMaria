#include <iostream>
using namespace std;
/**Problema 4.1 (Capitulo 3, problema 52)
 * Si un paralelogramo tiene una base de 30 cm 
 * y una altura vertical de 15 cm.
 * ¿Cual es su area?
 * */
 //@Author  BanuelosMaria
 //@Date    21 Marzo 2022
 
 //funcion
 int area()
 {
     //datos
     int base=30, altura= 15, resultado;
     //operacion
     resultado = base*altura;
     
     return resultado;
 }

int main()
{
    cout<<"Problema 4.1\n(Capitulo 3, problema 52)";
    cout<<"\n\tEl area de un paralelogramo\n";
    cout<<"Datos:\nBase: 30 cm\nAltura: 15 cm";
    //llamado de funcion
    cout<<"\nArea: "<<area()<<" cm.";

    return 0;
}
