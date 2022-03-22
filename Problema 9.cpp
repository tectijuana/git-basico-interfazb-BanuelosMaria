#include <iostream>
#include<math.h>
/**
 * Problema 9 
 * Calcular e imrpimir el numero de segundos en D dias , H horas, M minutos y S segundos. 
 * Por ejemplo:
 * en 4 dias, 6 horas, 24 minutos y 11 segundos hay 368 651 segundos
 * */
 //@Autor   Bañuelos María
 //@Date    08 Marzo 2022

using namespace std;

double segu()
{
    //cin
    int s;
    int min;
    int D;
    int H;
    //cons
    int minuto = min*60;
    int dia = D * 86400;
    int Hrs = H * 3600;
    
    double resultado = minuto + dia + Hrs + s;
    
    cout<<"\nDias: ";
    cin>> D;
     cout<<"\nHrs: ";
    cin>> H;
     cout<<"\nMin: ";
    cin>> min;
     cout<<"\nSeg: ";
    cin>> s;
    //en 4 dias, 6 horas, 24 minutos y 11 segundos hay 368 651 segundos
    cout<<"En "<<D<<" dia(s), "<<H<<" hr(s), "<<min<<" min, y "<<s<<" seg hay: "<< resultado;
    cout<<" segundos.";
    
    return 0;
}
int main()
{
    cout<<"\tProblema 9";
    cout<<"\n\nCalcular e imrpimir el numero de segundos en D dias , H horas, M minutos y S segundos.\nPor ejemplo: en 4 dias, 6 horas, 24 minutos y 11 segundos hay 368 651 segundo";
    cout<<"\n\nDatos:\n1min. = 60 seg.\n1hr. = 3600 seg \n1 dia. = 86400 seg.";
    cout<<"\nIngrese datos:";
    segu();
    return 0;
}
